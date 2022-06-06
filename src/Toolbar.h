#pragma once

#ifndef _INC_WINDOWS
    #include <windows.h>
#endif
#ifndef _INC_COMMCTRL
    #include <commctrl.h>
#endif
#include <cassert>
#include <vector>

#ifndef RT_TOOLBAR
    #define RT_TOOLBAR  MAKEINTRESOURCE(241)
#endif

// for MSVC rc
typedef struct tagTOOLBARDATA
{
    WORD wVersion;                  // Always 1
    WORD wWidth;                    // icon width
    WORD wHeight;                   // icon height
    WORD wItemCount;                // the # of items
    WORD aItems[ANYSIZE_ARRAY];     // The command IDs (a separator is zero)
} TOOLBARDATA, *PTOOLBARDATA;

// for MinGW/clang windres (non-standard)
typedef struct tagTOOLBARDATAWINDRES
{
    union
    {
        WORD wVersion;              // >= 3
        DWORD wWidth;               // icon width
    };
    DWORD wHeight;                  // icon height
    DWORD wItemCount;               // the # of items
    DWORD aItems[ANYSIZE_ARRAY];    // The command IDs (a separator is zero)
} TOOLBARDATAWINDRES, *PTOOLBARDATAWINDRES;

typedef INT (CALLBACK *FN_INT2INT)(INT id);

inline BOOL
LoadToolbarResource(HWND hwndTB, HINSTANCE hInst, LPCTSTR lpName,
                    FN_INT2INT fnCommandIdToImageIndex,
                    FN_INT2INT fnCommandIdToStringId = NULL)
{
    assert(IsWindow(hwndTB));
    assert(lpName != NULL);
    assert(fnCommandIdToImageIndex != NULL);

    if (hInst == NULL)
        hInst = GetModuleHandle(NULL);

    SendMessage(hwndTB, TB_BUTTONSTRUCTSIZE, sizeof(TBBUTTON), 0);
    DWORD style = (DWORD)GetWindowLongPtr(hwndTB, GWL_STYLE);
    SetWindowLongPtr(hwndTB, GWL_STYLE, style | TBSTYLE_FLAT);

    HRSRC hRsrc = FindResource(hInst, lpName, RT_TOOLBAR);
    DWORD cbReal = SizeofResource(hInst, hRsrc);
    if (cbReal < sizeof(TOOLBARDATA) - sizeof(WORD))
    {
        assert(0);
        return FALSE;
    }

    HGLOBAL hResData = LoadResource(hInst, hRsrc);
    LPVOID pvData = LockResource(hResData);
    if (pvData == NULL)
    {
        assert(0);
        return FALSE;
    }

    PTOOLBARDATA pData1 = (PTOOLBARDATA)pvData;
    HIMAGELIST himl;
    if (pData1->wVersion == 1)
    {
        WORD wWidth = pData1->wWidth;
        WORD wHeight = pData1->wHeight;
        DWORD wItemCount = pData1->wItemCount;
        size_t cbExpect = sizeof(TOOLBARDATA) + (wItemCount - 1) * sizeof(WORD);
        if (cbReal < cbExpect)
        {
            assert(0);
            return FALSE;
        }

        SendMessage(hwndTB, TB_SETBITMAPSIZE, 0, MAKELPARAM(wWidth, wHeight));

        // load image and set image list
        himl = ImageList_LoadImage(hInst, lpName, wWidth, 0, RGB(255, 0, 255),
                                   IMAGE_BITMAP, LR_CREATEDIBSECTION);
        if (himl == NULL)
        {
            assert(0);
            return FALSE;
        }
        SendMessage(hwndTB, TB_SETIMAGELIST, 0, (LPARAM)himl);

        // add buttons
        std::vector<TBBUTTON> buttons;
        for (DWORD i = 0; i < wItemCount; ++i)
        {
            TBBUTTON button;
            ZeroMemory(&button, sizeof(button));

            INT idCommand = button.idCommand = pData1->aItems[i];
            button.fsState = TBSTATE_ENABLED;
            button.iBitmap = -1;
            button.iString = -1;
            if (idCommand)
            {
                button.iBitmap = fnCommandIdToImageIndex(idCommand);
                button.fsStyle = BTNS_BUTTON | BTNS_AUTOSIZE;
                if (fnCommandIdToStringId)
                {
                    INT idString = fnCommandIdToStringId(idCommand);
                    TCHAR szText[MAX_PATH];
                    szText[0] = 0;
                    LoadString(hInst, idString, szText, _countof(szText));
                    button.iString = (INT)SendMessage(hwndTB, TB_ADDSTRING, 0, (LPARAM)szText);
                }
            }
            else
            {
                button.fsStyle = BTNS_SEP;
            }

            buttons.push_back(button);
        }
        SendMessage(hwndTB, TB_ADDBUTTONS, WPARAM(buttons.size()), (LPARAM)buttons.data());
    }
    else if (pData1->wVersion >= 3)
    {
        PTOOLBARDATAWINDRES pData2 = (PTOOLBARDATAWINDRES)pvData;
        DWORD wWidth = pData2->wWidth;
        DWORD wHeight = pData2->wHeight;
        DWORD wItemCount = pData2->wItemCount;
        size_t cbExpect = sizeof(TOOLBARDATA) + (wItemCount - 1) * sizeof(WORD);
        if (cbReal < cbExpect)
        {
            assert(0);
            return FALSE;
        }

        SendMessage(hwndTB, TB_SETBITMAPSIZE, 0, MAKELPARAM(wWidth, wHeight));

        // load image and set image list
        himl = ImageList_LoadImage(hInst, lpName, wWidth, 0, RGB(255, 0, 255),
                                   IMAGE_BITMAP, LR_CREATEDIBSECTION);
        if (himl == NULL)
        {
            assert(0);
            return FALSE;
        }
        SendMessage(hwndTB, TB_SETIMAGELIST, 0, (LPARAM)himl);

        // add buttons
        std::vector<TBBUTTON> buttons;
        for (DWORD i = 0; i < wItemCount; ++i)
        {
            TBBUTTON button;
            ZeroMemory(&button, sizeof(button));

            INT idCommand = button.idCommand = pData2->aItems[i];
            button.fsState = TBSTATE_ENABLED;
            button.iBitmap = -1;
            button.iString = -1;
            if (idCommand)
            {
                button.iBitmap = fnCommandIdToImageIndex(idCommand);
                button.fsStyle = BTNS_BUTTON | BTNS_AUTOSIZE;
                if (fnCommandIdToStringId)
                {
                    INT idString = fnCommandIdToStringId(idCommand);
                    TCHAR szText[MAX_PATH];
                    szText[0] = 0;
                    LoadString(hInst, idString, szText, _countof(szText));
                    button.iString = (INT)SendMessage(hwndTB, TB_ADDSTRING, 0, (LPARAM)szText);
                }
            }
            else
            {
                button.fsStyle = BTNS_SEP;
            }

            buttons.push_back(button);
        }
        SendMessage(hwndTB, TB_ADDBUTTONS, WPARAM(buttons.size()), (LPARAM)buttons.data());
    }
    else
    {
        return FALSE;
    }

    DWORD extended = 0;
    extended |= TBSTYLE_EX_DRAWDDARROWS; // BTNS_DROPDOWN and BTNS_WHOLEDROPDOWN will work
    //extended |= TBSTYLE_EX_MIXEDBUTTONS; // BTNS_SHOWTEXT works
    SendMessage(hwndTB, TB_SETEXTENDEDSTYLE, 0, extended);

    return TRUE;
}
