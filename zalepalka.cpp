#include <TXLib.h>

double physics();
double drow_Circly (double x, double y);
double control (double* Vx,double* Vy);
double drow_traingle (double x, double y, COLORREF sevet);

int main()
    {
    txCreateWindow (800, 500);
    //drow_Circly (400, 250);
    physics();

    return 0;
    }

double physics()
    {
    double x = 100, y = 50;
    double Vx = 7, Vy = 5;

    while (!GetAsyncKeyState (VK_RETURN))
        {
        drow_Circly (x, y);
        drow_traingle (x, y, RGB(x / 2, y * 5, x * 3));

        //printf ("x = %d, y = %d, Vx = %d, Vy = %d\n", x, y, Vx, Vy);

        x = x + Vx * 1;
        y = y + Vy * 1;

        if (x > 800)
            {
            Vx = -Vx;
            x = 800;
            }

        if (y > 500)
            {
            Vy = -Vy;
            y = 500;
            }

        if (x < 0)
            {
            Vx = -Vx;
            x = 0;
            }

        if (y < 0)
            {
            Vy = -Vy;
            y = 0;
            }

        control (&Vx, &Vy);

        txSleep (50);

        }


    return 0;
    }

double drow_Circly (double x, double y)
    {
    txSetColor (TX_LIGHTCYAN);
    txSetFillColor (RGB (x / 2, y / 4, x / 3));
    txCircle (x, y, 20);

    return 0;
    }

double drow_traingle (double x, double y, COLORREF sevet)
    {
    txSetColor (sevet);
    txSetFillColor (sevet);
    txLine (0 + x, -90 + y, 94 + x,  75 + y);
    txLine (94 + x, 75 + y, -95 + x, 73 + y);
    txLine (-95 + x, 73 + y, x,     -90 + y);

    return 0;
    }

double control (double* Vx, double* Vy)
    {
    if (GetAsyncKeyState (VK_UP))
        {
        (*Vy)++;
        }

    if (GetAsyncKeyState (VK_CONTROL))
        {
        //Vy * 0.5;
        //Vx * 0.5;
        *Vx = *Vx * 0.9;
        *Vy = *Vy * 0.9;
        }

    if (GetAsyncKeyState (VK_DOWN))
        {
        (*Vy)--;
        }

    if (GetAsyncKeyState (VK_RIGHT))
        {
        (*Vx)++;
        }

    if (GetAsyncKeyState (VK_LEFT))
        {
        (*Vx)--;
        }

    if (GetAsyncKeyState (VK_MENU))
        {
        *Vx += 10;
        }

    if (GetAsyncKeyState (VK_BACK))
        {
        *Vx = 0;
        *Vy = 0;
        }

    return 0;                                      //"*"-СѓРєР°Р·Р°С‚РµР»СЊ(Р°РґСЂРµСЃ РѕСЂРёРіРёРЅР°Р»СЊРЅРѕР№ РїРµСЂРµРјРµРЅРЅРѕР№)
    }
