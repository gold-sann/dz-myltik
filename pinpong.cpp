#include "TXLib.h"

double otrazenie (double* x, double* y, double* Vx, double* Vy);
double geroy(double x, double y);
double controlirovanie (double* Vx, double* Vy, int up, int dow, int ri, int le);
double cub ();
double calculate_color (double x, double y, double x2, double y2, COLORREF smaldist, COLORREF bigdist);

int main()
    {
    txCreateWindow (800, 500);

    double x = 200; double y = 150;
    double Vx = 4, Vy = 3;



    while (!GetAsyncKeyState(VK_RETURN))
        {
        x += Vx * 1;
        y += Vy * 1;
        Vx *= 0.99;
        Vy *= 0.99;

        otrazenie (&x, &y, &Vx, &Vy);
        geroy (x, y);
        controlirovanie (&Vx, &Vy, VK_UP, VK_DOWN, VK_RIGHT, VK_LEFT);
        cub ();
        calculate_color (x, y,  800 / 2, 500 / 2, TX_RED, TX_GREEN);

        txSleep(10);
        }
    }

double otrazenie (double* x, double* y, double* Vx, double* Vy)
    {
        if (*x >= 800)
            {
            *x = 800;
            *Vx *= -1;
            }
        if (*x <= 0)
            {
            *x = 0;
            *Vx *= -1;
            }
        if (*y >= 500)
            {
            *y = 500;
            *Vy *= -1;
            }
        if (*y <= 0)
            {
            *y = 0;
            *Vy *= -1;
            }


    return 0;
    }

double geroy(double x, double y)
    {
    txCircle(x, y, 10);
    return 0;
    }

double controlirovanie (double* Vx, double* Vy, int up, int dow, int ri, int le)
    {
    if (GetAsyncKeyState (up))
        {
        (*Vy)++;
        }

    if (GetAsyncKeyState (VK_CONTROL))
        {
        *Vx = *Vx * 0.5;
        *Vy = *Vy * 0.5;
        }

    if (GetAsyncKeyState (dow))
        {
        (*Vy)--;
        }

    if (GetAsyncKeyState (ri))
        {
        (*Vx)++;
        }

    if (GetAsyncKeyState (le))
        {
        (*Vx)--;
        }

    return 0;
    }

double cub ()
    {
    txRectangle (800 / 2 - 10, 500 / 2 - 10, 800 / 2 + 10, 500 / 2 + 10);
    txRectangle (800 / 3 - 10, 500 / 3 - 10, 800 / 3 + 10, 500 / 3 + 10);
    return 0;
    }

double calculate_color (double x, double y, double x2, double y2, COLORREF smalldist, COLORREF bigdist)
    {
    double distance = sqrt((x2 - x) * (x2 - x) + (y2 - y) * (y2 - y));

    if (distance <= 200)
        {
        txSetFillColor (smalldist);
        }
    else
        {
        txSetFillColor (bigdist);
        }
    return 0;
    }
