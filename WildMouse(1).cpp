//-----------------------------------------------------------------------------
// WildMouse.cpp (c) Ded, 2012
//
// make: cpp WildMouse.cpp -mwindows -O2
//-----------------------------------------------------------------------------

#include <TXLib.h>

#include <stdlib.h>
#include <process.h>
#include <windows.h>

//-----------------------------------------------------------------------------

void Help (void*);

//-----------------------------------------------------------------------------

int main()
    {
    _beginthread (Help, 0, NULL);

    POINT v = { 10, 10 };

    while (!GetAsyncKeyState (VK_ESCAPE))
        {
        mouse_event (MOUSEEVENTF_MOVE, rand() % (v.x*2 + 1) - v.x,
                                       rand() % (v.y*2 + 1) - v.y, 0, 0);
        Sleep (10);
        }

    POINT sz = { GetSystemMetrics (SM_CXSCREEN),
                 GetSystemMetrics (SM_CYSCREEN) };

    while (!GetAsyncKeyState (VK_RETURN))
        {
        mouse_event (MOUSEEVENTF_MOVE, v.x, v.y, 0, 0);

        POINT p = {};
        GetCursorPos (&p);

        if (p.x < 10 || p.x > sz.x-10) { v.x = -v.x; mouse_event (MOUSEEVENTF_MOVE, v.x, 0,   0, 0); }
        if (p.y < 10 || p.y > sz.y-10) { v.y = -v.y; mouse_event (MOUSEEVENTF_MOVE, 0,   v.y, 0, 0); }

        Sleep
        (10);
        }

    return 0;
    }

//-----------------------------------------------------------------------------

void Help (void*)
    {
    while (!GetAsyncKeyState (VK_SPACE)) Sleep (100);

    MessageBox (NULL, "Press [Esc] and then [Enter]    ", "Wild Mouse", MB_TOPMOST | MB_ICONINFORMATION);
    }

