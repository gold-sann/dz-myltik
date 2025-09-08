
#include "TXLib.h"

int main()
    {
    txCreateWindow (800, 600);

    double x = 400;
    double y = 300;
    double Vx = 2;

    x += *Vx * 0.99;
    *Vx = *Vx * 0.99;

    return 0;
    }

double control ()
    {
    if (GetAsyncKeyState(VK_RIGHT))
        {
        (*Vx) += 0.99;
        }
    if (GetAsyncKeyState(VK_LEFT))
        {
        (*Vx) -= 0.99
        }
    return 0;
    }
