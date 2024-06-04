#include "TXLib.h"

int kitay_drow (int x, int y);
int drow_mer (int x, int y);
int drow_russ (int x);
int drow_poezd (int x);
int drow_camolet (int x, int y);
int drow_ogoni(int right_left);

int main()
    {

    txCreateWindow (1300, 600);

    for (int x = 50, y = -15, xcam = 1000, ycam = -15, xkit = 300, ykit = 400, right_left = 1, xmer = 1300, ymer = 475; x < 300; x++, y++, xcam -= 5, ycam += 2, xkit -= 3, ykit -= 2, right_left *= -10, xmer++, ymer-= 0)

        {
        txSetFillColor (TX_BLACK);                                                                                          //5 * -1= -5,-5*-1=5*-1=-5*-1=5
        txClear();

        drow_poezd (x * 4);
        drow_mer (x * 4, ymer);
        drow_russ (x * 4);
        kitay_drow (xkit, ykit);
        drow_camolet (xcam , ycam);
        drow_ogoni(right_left);

        txSleep (200);
        }

    }

int kitay_drow (int x, int y)
    {

    txSetFillColor (TX_BLUE);
    txCircle (350 - 350 - x, 400 - 400 + y, 15);

    txSetFillColor (TX_RED);
    txSetColor (TX_WHITE);
    txLine (200 - 350 + x, 600 - 400 + y, 275 - 350 + x, 450 - 400 + y);
    txLine (275 - 350 + x, 450 - 400 + y, 225 - 350 + x, 450 - 400 + y);
    txLine (225 - 350 + x, 450 - 400 + y, 300 - 350 + x, 300 - 400 + y);
    txLine (300 - 350 + x, 300 - 400 + y, 200 - 350 + x, 300 - 400 + y);
    txLine (200 - 350 + x, 300 - 400 + y, 200 - 350 + x, 250 - 400 + y);
    txCircle (350 - 350 + x, 227 - 400 + y, 30);
    txLine (200 - 350 + x, 250 - 400 + y, 500 - 350 + x, 250 - 400 + y);
    txLine (500 - 350 + x, 250 - 400 + y, 500 - 350 + x, 300 - 400 + y);
    txLine (500 - 350 + x, 300 - 400 + y, 400 - 350 + x, 300 - 400 + y);
    txLine (400 - 350 + x, 300 - 400 + y, 500 - 350 + x, 440 - 400 + y);
    txLine (500 - 350 + x, 440 - 400 + y, 450 - 350 + x, 440 - 400 + y);
    txLine (450 - 350 + x, 440 - 400 + y, 525 - 350 + x, 600 - 400 + y);

    txFloodFill (300 - 350 + x, 304 - 400 + y);

    return 0;

    }

int drow_mer (int x, int y)
    {

    txSetFillColor (TX_WHITE);
    txSetColor (TX_WHITE);
    txLine (525 - 880 + x, 600 -  475 + y, 650 - 880 + x, 600);
    txLine (650 - 880 + x, 600 -  475 + y, 675 - 880 + x, 475);
    txCircle (675 - 880 + x, 475 -  475 + y, 100);
    txLine (725 - 880 + x, 600 -  475 + y, 700 - 880 + x, 475);
    txCircle (675 - 880 + x, 375 -  475 + y, 50);
    txLine (675 - 880 + x, 325 -  475 + y, 650 - 880 + x, 325);
    txLine (650 - 880 + x, 450 -  475 + y, 550 - 880 + x, 450);
    txLine (750 - 880 + x, 450 -  475 + y, 800 - 880 + x, 450);
    txSetFillColor (TX_BLACK);
    txCircle (880 - 880 + x, 475 -  475 + y, 15);

    return 0;

    }

int drow_russ (int x)
    {

    txSetFillColor (TX_RED);
    txCircle (1150, 450, 15);
    txSetFillColor (TX_BLUE);
    txSetColor (TX_BLUE);
    txLine (900 - 1150 + x, 600, 925 - 1150 + x, 500);
    txLine (925 - 1150 + x, 500, 850 - 1150 + x, 450);
    txLine (850 - 1150 + x, 450, 950 - 1150 + x, 350);
    txCircle (950 - 1150 + x, 350, 30);
    txLine (980 - 1150 + x, 350, 980 - 1150 + x, 500);
    txCircle (980 - 1150 + x, 500, 20);
    txLine (980 - 1150 + x, 500, 980 - 1150 + x, 600);

    return 0;

    }

int drow_poezd (int x)
    {

    txSetColor (TX_GREEN);
    txSetFillColor (TX_GREEN);
    txRectangle (400 + x, 200, 1300 + x, 600);
    txLine (1000 + x, 200, 1000 + x, 100);
    txLine (1000 + x, 100, 1100 + x, 100);
    txLine (1000 + x, 100, 1050 + x, 100);
    txLine (1050 + x, 100, 1100 + x, 100);
    txLine (1100 + x, 100, 1100 + x, 200);

    return 0;
    }

int drow_camolet (int x, int y)
    {

    txSetColor (TX_GREEN, 20);
    txSetFillColor (TX_PINK);
    txCircle (1200 - 1200 + x, 260 - 260 + y, 15);
    txLine (1027 - 1200 + x, 297 - 260 + y, 1095 - 1200 + x, 226 - 260 + y);
    txLine (1075 - 1200 + x, 226 - 260 + y, 1156 - 1200 + x, 223 - 260 + y);
    txLine (1156 - 1200 + x, 223 - 260 + y, 1202 - 1200 + x, 233 - 260 + y);
    txLine (1202 - 1200 + x, 233 - 260 + y, 1310 - 1200 + x, 147 - 260 + y);
    txLine (1310 - 1200 + x, 147 - 260 + y, 1324 - 1200 + x, 200 - 260 + y); //?
    txLine (1324 - 1200 + x, 200 - 260 + y, 1290 - 1200 + x, 250 - 260 + y);
    txLine (1290 - 1200 + x, 250 - 260 + y, 1184 - 1200 + x, 277 - 260 + y);
    txLine (1184 - 1200 + x, 277 - 260 + y, 1223 - 1200 + x, 225 - 260 + y);
    txLine (1223 - 1200 + x, 225 - 260 + y, 1088 - 1200 + x, 239 - 260 + y);
    txLine (1035 - 1200 + x, 306 - 260 + y, 1148 - 1200 + x, 329 - 260 + y);
    txLine (1148 - 1200 + x, 329 - 260 + y, 1405 - 1200 + x, 233 - 260 + y);
    txLine (1125 - 1200 + x, 219 - 260 + y, 1124 - 1200 + x, 180 - 260 + y);
    txLine (1012 - 1200 + x, 137 - 260 + y, 1240 - 1200 + x, 213 - 260 + y);
    txLine (1046 - 1200 + x, 243 - 260 + y, 1186 - 1200 + x, 125 - 260 + y);
    //txLine (500 - x, 300 , 250 - x, 200);
    //txCircle (250 - x, 200, 30);
    //txLine (500 - x, 300, 250 - x, 200);
    //txCircle (500 - x, 300, 30);
    //txLine ( 500, 300, 500, 250);

    return 0;
    }

int drow_ogoni (int right_left)
    {

    txSetColor (TX_LIGHTRED, 5);
    txLine (0, 350, 50, 450);
    txLine (50, 350, 50, 450);
    txLine (50 + right_left, 450, 75 + right_left, 400);
    txLine (75 + right_left, 400, 100 + right_left, 300);
    txLine (100, 300, 100, 600);
    txLine (100, 600, 1, 600);
    txSetFillColor (TX_LIGHTRED);
    //txFloodFill (5, 500);
    txSetFillColor (TX_BLUE);
    txCircle (75, 400, 10);

    return 0;
    }
