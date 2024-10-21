#include <TXLib.h>

double physics();
double drow_Circly (double x, double y);
double control (double* Vx,double* Vy,  int up, int dow, int ri, int le, int me, int ba);
double drow_traingle (double x2, double y2, COLORREF sevet);
double otrahenie (double* x, double* y, double* Vx, double* Vy);

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
    double Vx = 3, Vy = 2;
    double x2 = 200, y2 = 150;
    double Vx2 = 2, Vy2 = 3;

    while (!GetAsyncKeyState (VK_RETURN))
        {
        txSetFillColor (TX_BLACK);
        txClear();
        drow_Circly (x, y);
        drow_traingle (x2, y2, RGB(x2 / 3, y2 * 4, x2 * 5));

        //printf ("x = %d, y = %d, Vx = %d, Vy = %d\n", x, y, Vx, Vy);

        otrahenie (&x, &y, &Vx, &Vy);
        otrahenie (&x2, &y2, &Vx2, &Vy2);



        control (&Vx, &Vy, VK_UP, VK_DOWN, VK_RIGHT, VK_LEFT, VK_MENU, VK_BACK);
        control (&Vx2, &Vy2, 'W', 'S', 'D', 'A', 'Q', VK_CONTROL);

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

double drow_traingle (double x2, double y2, COLORREF sevet)
    {
    txSetColor (sevet);
    txSetFillColor (sevet);
    txLine (0 + x2, -90 + y2, 94 + x2,  75 + y2);
    txLine (94 + x2, 75 + y2, -95 + x2, 73 + y2);
    txLine (-95 + x2, 73 + y2, x2,     -90 + y2);

    return 0;
    }

double control (double* Vx, double* Vy, int up, int dow, int ri, int le, int me, int ba)
    {
    if (GetAsyncKeyState (up))
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

    if (GetAsyncKeyState (me))
        {
        *Vx += 10;
        }

    if (GetAsyncKeyState (ba))
        {
        *Vx = 0;
        *Vy = 0;
        }

    return 0;                                      //"*"-СѓРєР°Р·Р°С‚РµР»СЊ(Р°РґСЂРµСЃ РѕСЂРёРіРёРЅР°Р»СЊРЅРѕР№ РїРµСЂРµРјРµРЅРЅРѕР№)
    }

double otrahenie (double* x, double* y, double* Vx, double* Vy)
    {
    *x = *x + *Vx * 1;
    *y = *y + *Vy * 1;

    if (*x > 800)
        {
        *Vx = -*Vx;
        *x = 800;
        }

    if (*y > 500)
        {
        *Vy = -*Vy;
        *y = 500;
        }

    if (*x < 0)
        {
        *Vx = -*Vx;
        *x = 0;
        }

    if (*y < 0)
        {
        *Vy = -*Vy;
        *y = 0;
        }

    return 0;
    }
