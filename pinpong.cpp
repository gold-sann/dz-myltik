#include <TXLib.h>

double physics();
double drow_Circly (double x, double y);
double control (double* Vx,double* Vy,  int up, int dow, int ri, int le, int me, int ba);
double drow_traingle (double x2, double y2, COLORREF sevet);
double otrahenie (double* x, double* y, double* Vx, double* Vy);
double rasstoanie (double x, double y, double x2, double y2);
int zona_win ();
double proverka (double x, double y);

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
    double Vx = 2.5, Vy = 1.5;
    double x2 = 800, y2 = 500;
    double Vx2 = 1.5, Vy2 = 2.5;
    int score = 0;
    char scorestr [100]= "";
    //int score2 = 0;
    //char scorestr2 [100]= "";

    while (!GetAsyncKeyState (VK_RETURN))
        {
        txSetFillColor (TX_BLACK);
        txClear();
        drow_Circly (x, y);
        drow_traingle (x2, y2, RGB(x2 / 3, y2 * 4, x2 * 5));

        txSetColor (TX_WHITE);
        txTextOut (0, 0, scorestr);

        //printf ("x = %d, y = %d, Vx = %d, Vy = %d\n", x, y, Vx, Vy);

        otrahenie (&x, &y, &Vx, &Vy);
        otrahenie (&x2, &y2, &Vx2, &Vy2);


        zona_win();

        proverka (x, y);


        control (&Vx, &Vy, VK_UP, VK_DOWN, VK_RIGHT, VK_LEFT, VK_MENU, VK_BACK);
        control (&Vx2, &Vy2, 'W', 'S', 'D', 'A', 'Q', VK_CONTROL);

        double rassto = rasstoanie (x, y, x2, y2);
        if (rassto < 200)
            {
            txMessageBox ("game over,win is traingle");

            score = score + 1;
            printf ( "побед треугольника %d", score);

            x = 100, y = 50;
            x2 = 800, y2 = 500;
            }

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
    txCircle (x2, y2, 10);
    txLine (0 + x2, -90 + 125 + y2, 94 + x2,  -90 + 125 + y2);
    txLine (94 + x2, -90 + 125 + y2, 94 + x2, -150 +125 + y2);
    txLine (94 + x2, -150 + 125 + y2, -90 + x2, -150 + 125 + y2);
    txLine (-90 + x2, -150 + 125 + y2, 0 + x2, -90 + 125 + y2);


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

double rasstoanie (double x, double y, double x2, double y2)
    {
    double rust = sqrt((x - x2) * (x - x2)) + ((y - y2) * (y - y2));
    return rust;
    }

int zona_win ()
    {
    txLine (800, 500, 600, 500);
    txLine (600, 500, 600, 300);
    txLine (600, 300, 800, 300);
    txCircle (700, 400, 10);
    return 0;
    }

double proverka (double x, double y)
    {
    double sandstone = sqrt((x - 700) * (x - 700)) + ((y - 400) * (y - 400));
    if (sandstone < 200)
        {
        //scope2 = scope2 + 1;
        txMessageBox ("game over, win is boll");
        //printf = ("побед у мячика %d", scope2);

        //x = 100, y = 50;
        //x2 = 800, y2 = 500;
        return 1;
        }
    else
        //scope2 = scope2 + 0;
        return 0;

    }


