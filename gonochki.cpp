#include <TXLib.h>

double phy ();
double ypr (double *Vx, double *Vy);
double otr (double *x, double *y, double *Vx, double *Vy);
double circle (double x, double y);
double trassa ();

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
        trassa ();

        txLine(700, 700, 700, 800);
        if (x >= 700 and y >= 750)
            {
            printf ("РїРѕР±РµРґР° СЃРёРЅРёРіРѕ");
            }

        txSleep (10);
        }

    return 0;
    }

    double ypr (double *Vx, double *Vy)
        {
        if (GetAsyncKeyState (VK_RIGHT))
            {
            (*Vx) += 0.5;
            }
        if (GetAsyncKeyState (VK_LEFT))
            {
            (*Vx) -= 0.5;
            }
        if (GetAsyncKeyState (VK_UP))
            {
            (*Vy) += 0.5;
            }
        if (GetAsyncKeyState (VK_DOWN))
            {
            (*Vy) -= 0.5;
            }
        return 0;
        }


double otr (double *x, double *y, double *Vx, double *Vy)
    {
    *x = *x + *Vx * 0.99;
    *y = *y + *Vy * 0.99;
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

double trassa ()
    {
    txLine (0, 0, 100, 100);
    return 0;
    }
