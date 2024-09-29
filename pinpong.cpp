#include <TXLib.h>

int physics();
int drow_Circly();

int main()
    {
    txCreateWindow (800, 500);
    physics();
    drow_Circly();

    return 0;
    }

int physics()
    {
    int x = 100, y = 50;
    int Vx = 7, Vy = 5;

    while (!GetAsyncKeyState (VK_RETURN))
        {
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

        if (GetAsyncKeyState (VK_RIGHT))
            {
            Vx++;
            }

        if (GetAsyncKeyState (VK_LEFT))
            {
            Vx--;
            }
        txSleep (50);

         if (GetAsyncKeyState (VK_DOWN))
            {
            Vx++;
            Vx++;
            Vx++;
            Vx++;
            Vx++;
            Vx++;
            Vx++;
            }
        txSleep (50);



        }

    return 0;
    }

drow_Circly()
    {
    txSetColor (TX_LIGHTCYAN);
    txSetFillColor (RGB (x / 2, y / 4, x / 3));
    txCircle (x, y, 20);
    txCircle (x+20, y+20, 15);
    return 0;
    }
