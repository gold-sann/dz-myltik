#include <TXLib.h>

const COLORREF COLOR_ACID = 0x00FED7;
const COLORREF COLOR_FINISH_1 = 0x00ff54;
const COLORREF COLOR_FINISH_2 = 0xff06cd;

double phy (HDC vac, HDC back);
double ypr (double *Vx, double *Vy);
//double otr (double *x, double *y, double *Vx, double *Vy);
double circle (double x, double y);
//double trassa ();
double mov (double* x, double* Vx, double* y, double*  Vy);
double oil (double *Vx, double *Vy, COLORREF color);
int Finish (COLORREF color, COLORREF old_color, int check);

int main()
    {
    HDC vac = txLoadImage ("пїЅпїЅпїЅпїЅпїЅ пїЅпїЅпїЅ пїЅпїЅпїЅпїЅпїЅ.bmp");
    if (vac == NULL)
        {
        printf("пїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅ пїЅпїЅпїЅпїЅпїЅ пїЅпїЅпїЅпїЅпїЅпїЅ пїЅпїЅпїЅ пїЅпїЅпїЅпїЅпїЅ.bmp");

        return 0;
        }

    HDC back = txLoadImage("пїЅпїЅпїЅпїЅпїЅпїЅ пїЅпїЅпїЅ пїЅпїЅпїЅпїЅпїЅ.bmp");
    if (back == NULL)
        {
        printf("пїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅ пїЅпїЅпїЅпїЅ");

        return 0;
        }

    txCreateWindow (1554, 797);
    phy (vac, back);
    txDeleteDC(vac);
    txDeleteDC(back);

    return 0;
    }

double phy (HDC vac, HDC back)
    {
    double x = 400, y = 400;
    double Vx = 4, Vy = 3;

    COLORREF old_color = 0;
    COLORREF color = 0;

    int check = 0;

    while (!GetAsyncKeyState (VK_RETURN))
        {
        //txBitBlt (0, 0, vac);

        old_color = color;
        color = txGetPixel (x, y, vac);
        //printf ("color = %06X, old_color = %06X\n", (unsigned int) color, (unsigned int) old_color);
        //if (color != old_color)
            //printf("****************************************************************\n");

        txBitBlt (0, 0, back);

        ypr (&Vx, &Vy);
        mov (&x, &Vx, &y, &Vy);
        oil (&Vx, &Vy, color);
        Finish (color, old_color, check);
        //otr (&x, &y, &Vx, &Vy);
        //printf ("x, y = %lg, %lg\n", x, y);

        circle (x,y);

        if (color == COLOR_ACID)
            {
            Vx /= 2;
            Vy /= 2;
            //txSetFillColor (TX_LIGHTRED);
            //printf ("пїЅпїЅпїЅпїЅпїЅпїЅ пїЅпїЅпїЅ \n");
            }
        /*else
            {
            txSetFillColor (TX_WHITE);
            }*/
        //trassa ();

        txLine(700, 700, 700, 800);
        if (x >= 700 and y >= 750)
            {
            printf ("пїЅпїЅпїЅпїЅпїЅпїЅ");
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
            (*Vy) -= 0.5;
            }
        if (GetAsyncKeyState (VK_DOWN))
            {
            (*Vy) += 0.5;
            }
        if (GetAsyncKeyState (VK_MENU))
            {
            (*Vy) = 0;
            (*Vx) = 0;
            }

        return 0;
        }


/*double otr (double *x, double *y, double *Vx, double *Vy)
    {

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
    }*/

double mov (double* x, double* Vx, double* y, double*  Vy)
    {
    *x = *x + *Vx;
    *y = *y + *Vy;

    *Vx = *Vx * 0.99;
    *Vy = *Vy * 0.99;

    return 0;
    }

double circle (double x, double y)
    {
    txSetColor (TX_PINK, 3);
    txSetFillColor (TX_BLACK);
    txCircle (x, y, 10);
    //printf ("пїЅ пїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅ!!!\n");

    return 0;
    }

double oil (double *Vx, double *Vy, COLORREF color)
    {
    if (color == TX_BLACK)
        {
        if (GetAsyncKeyState (VK_RIGHT))
                {
                (*Vx) -= 0.9;
                }
            if (GetAsyncKeyState (VK_LEFT))
                {
                (*Vx) += 0.9;
                }
            if (GetAsyncKeyState (VK_UP))
                {
                (*Vy) += 0.9;
                }
            if (GetAsyncKeyState (VK_DOWN))
                {
                (*Vy) -= 0.9;
                }
        }

    return 0;

    }

int Finish (COLORREF color, COLORREF old_color, int check)
    {
    if (old_color == COLOR_FINISH_1 and color == COLOR_FINISH_2)
        {
        check += 1;
        printf("РїСЂРѕР№РґРµРЅРЅРѕ РєСЂСѓРіРѕРІ:", check);

        return 1;
        }

    if (color == COLOR_FINISH_1 and old_color == COLOR_FINISH_2)
        {
        check -= 1;

        return 1;
        }

    return 0;
    }
