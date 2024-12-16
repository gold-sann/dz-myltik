#include <TXLib.h>

double phy ();
double ypr (double *Vx, double *Vy);
double otr (double *x, double *y, double *Vx, double *Vy);
double circle (double x, double y);

int main()
    {
    txCreateWindow (800, 800);
    phy ();
    return 0;
    }

double phy ()
    {
    double x = 400, y = 400;
    double Vx = 4, Vy = 3;

    while (!GetAsyncKeyState (VK_RETURN))
        {
        ypr (&Vx, &Vy);
        otr (&x, &y, &Vx, &Vy);
        circle (x,y);

        txSleep (100);
        }

    return 0;
    }

    double ypr (double *Vx, double *Vy)
        {
        if (GetAsyncKeyState (VK_RIGHT))
            {
            (*Vx) ++;
            }
        if (GetAsyncKeyState (VK_LEFT))
            {
            (*Vx) --;
            }
        if (GetAsyncKeyState (VK_UP))
            {
            (*Vy) ++;
            }
        if (GetAsyncKeyState (VK_DOWN))
            {
            (*Vy) --;
            }
        return 0;
        }


double otr (double *x, double *y, double *Vx, double *Vy)
    {
    *x = *x + *Vx * 1;
    *y = *y + *Vy * 1;
    if (*x > 800)
            {
            *Vx = -*Vx;
            *x = 800;
            }
    if (*x < 0)
            {
            *Vx = -*Vx;
            *x = 0;
            }
    if (*y > 800)
            {
            *Vy = -*Vy;
            *y = 800;
            }
    if (*y < 0)
            {
            *Vy = -*Vy;
            *y = 0;
            }
    return 0;
    }

double circle (double x, double y)
    {
    txCircle (x, y, 10);
    return 0;
    }
