#include "TXLib.h"

double otrazenie (double* x, double* y, double* Vx, double* Vy);
double geroy(double x, double y, COLORREF color_geroy);
double controlirovanie (double* Vx, double* Vy, int up, int dow, int ri, int le);
double cub (double centre_x, double centre_y, double x, double y);
double calculate_dist (double x, double y, double x2, double y2, double *dist);

int main()
    {
    txCreateWindow (800, 500);

    double x = 200; double y = 150;
    COLORREF color_geroy = TX_BLUE;
    double Vx = 4, Vy = 3;
    double centre_x = 800 / 2;
    double centre_y = 500 / 2;



    while (!GetAsyncKeyState(VK_RETURN))
        {
        x += Vx * 1;
        y += Vy * 1;
        Vx *= 0.99;
        Vy *= 0.99;

        otrazenie (&x, &y, &Vx, &Vy);
        geroy (x, y, color_geroy);
        controlirovanie (&Vx, &Vy, VK_UP, VK_DOWN, VK_RIGHT, VK_LEFT);
        cub (centre_x - 200, centre_y, x, y);
        cub (centre_x + 200, centre_y, x, y);

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

double geroy(double x, double y, COLORREF color_geroy)
    {
    txSetFillColor(color_geroy);
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

double cub (double centre_x, double centre_y, double x, double y)
    {
    double distance = 0;

    calculate_dist (x, y,  centre_x, centre_y, &distance);

    if (distance <= 100)
        {
        txSetFillColor (TX_RED);
        }
    else
        {
        txSetFillColor (TX_YELLOW);
        }

    txRectangle (centre_x - 10, centre_y - 10, centre_x + 10, centre_y + 10);
    return 0;
    }

double calculate_dist (double x, double y, double x2, double y2, double *dist)
    {
    *dist = sqrt((x2 - x) * (x2 - x) + (y2 - y) * (y2 - y));

    return 0;
    }

double calculate_dist2 (double x, double y, double x2, double y2)
    {
    double dist = sqrt((x2 - x) * (x2 - x) + (y2 - y) * (y2 - y));

    return dist;
    }

double calculate_dist3 (double x, double y, double x2, double y2)
    {
    return sqrt((x2 - x) * (x2 - x) + (y2 - y) * (y2 - y));
    }



double cub2 (double centre_x, double centre_y, double x, double y)
    {
    double distance = calculate_dist2 (x, y,  centre_x, centre_y);

    if (distance <= 100)
        {
        txSetFillColor (TX_RED);
        }
    else
        {
        txSetFillColor (TX_YELLOW);
        }

    txRectangle (centre_x - 10, centre_y - 10, centre_x + 10, centre_y + 10);
    return 0;
    }

double cub3 (double centre_x, double centre_y, double x, double y)
    {
    if (calculate_dist2 (x, y,  centre_x, centre_y) <= 100)
        {
        txSetFillColor (TX_RED);
        }
    else
        {
        txSetFillColor (TX_YELLOW);
        }

    txRectangle (centre_x - 10, centre_y - 10, centre_x + 10, centre_y + 10);
    return 0;
    }

double cub4 (double centre_x, double centre_y, double x, double y)
    {
    txSetFillColor ((calculate_dist2 (x, y,  centre_x, centre_y) <= 100)? TX_RED : TX_YELLOW);

    txRectangle (centre_x - 10, centre_y - 10, centre_x + 10, centre_y + 10);
    return 0;
    }

double cub5 (double centre_x, double centre_y, double x, double y)
    {
    double distance = calculate_dist2 (x, y,  centre_x, centre_y);

    txSetFillColor ((distance <= 100) ? TX_RED : TX_YELLOW);

    txRectangle (centre_x - 10, centre_y - 10, centre_x + 10, centre_y + 10);
    return 0;
    }



/*double calculate_color (double x, double y, double x2, double y2, COLORREF smalldist, COLORREF bigdist)
    {
    double distance = sqrt((x2 - x) * (x2 - x) + (y2 - y) * (y2 - y));

    if (distance <= 100)
        {
        txSetFillColor (smalldist);
        }
    else
        {
        txSetFillColor (bigdist);
        }
    return 0;
    }*/
