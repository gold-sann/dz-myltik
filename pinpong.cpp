#include "TXLib.h"

double otrazenie (double x, double y, double Vx, double Vy);
double geroy(double x, double y);

int main()
    {
    txCreateWindow (800, 500);

    double x = 200; double y = 150;
    double Vx = 4, Vy = 3;

    while (!GetAsyncKeyState(VK_RETURN))
        {
        x += Vx * 1;
        y += Vy * 1;
        //otrazenie (x, y, Vx, Vy);
        geroy (x, y);

        if (x >= 800)
            {
            x = 800;
            Vx *= -1;
            }
        if (x <= 0)
            {
            x = 0;
            Vx *= -1;
            }
        if (y >= 500)
            {
            y = 500;
            Vy *= -1;
            }
        if (y <= 0)
            {
            y = 0;
            Vy *= -1;
            }



        txSleep(10);
        }
    }

/*double otrazenie (double* x, double y, double* Vx, double Vy)
    {


    return 0;
    }*/

double geroy(double x, double y)
    {
    txCircle(x, y, 10);
    return 0;
    }
