#include <TXLib.h>

int drow_doroga();

int main()
    {
    txCreateWindow (800, 800);
    drow_doroga()

    return 0;
    }

int drow_doroga()
    {
    txLine (211, 103, 288, 56);
    txLine (288, 56, 826, 48);
    txLine (826, 48, 946, 188);
    txLine (946, 188, 381, 577);
    txLine (381, 577);
    return 0;
    }

int ypravlenie (int x, int y, int Vx, int Vy)
    {
    if (GetAsyncKeyState (upr));
    {
    (*Vy)++;
    }
    if (GetAsyncKeyState (dow));
    {
    (*Vy)--;
    }
    if (GetAsyncKey  (ri));
        {
        (*Vx)++;
        }
    if (GetAsyncKey  (ri));
        {
        (*Vx)--;
        }
    return 0;
    }

