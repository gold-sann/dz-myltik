#include "TXLib.h"

const double Tolshina = 15;

int drow_cat (double x, double y, double size_x, double size_y, double slide_leg, double slide_y, double slide_yxa, double slide_nos, double slide_nos_x, double slide_leg_ggo, int color_a, int color_b);
int drow_misca();
int drow_comp (double x, double y, double size_x, double size_y);
int drow_miscaar();
int drow_lest (double x, double y);
int drow_lest_6 (double x, double y, double size_x, double size_y, double tolshina);
int drow_lestnica52 (double x, double y, double size_x, double size_y);
int drow_stive (double x, double y, double size_x, double size_y, double slide_ster, double slide_sten);
int drow_leni (int y, const char text[], int color);
int drow_ctol (int x, int y);
int russ_line (double x1, double y1, double x2, double y2, double color, double tol);
int drow_syb ();
int drow_sybr ();
int drow_sybry ();
int sen_1();
int sen_2();
int sen_22();
int sen_223();
int sen_224();
int sen_225();
int sen_3();
int sen_31();
int sen_conec();

int main()
    {

    txCreateWindow (2000, 1000);

    txSetColor (RGB (0, 0, 0));
    //drow_cat (700, 400, 1, 1, 57, 50, 5, 11, 11, 67, 57, 57);
    //txSetColor (TX_PINK, 3);
    //drow_cat (300, 280, 1, 1, 57, 50, 5, 1, 1, 67);
    //drow_miscaar();
    //drow_lest_6 (500, 500, 1.5, 1.5);
    //drow_stive(400, 270, 1, 1, 57, 50);
    //drow_lest_6 (400, 400, -0.5, 1.5);
    sen_1();
    sen_2();
    sen_22();
    sen_223();
    sen_224();
    sen_225();
    sen_3();
    sen_31();
    sen_conec();

    return 0;

    }

int sen_1()
    {
    drow_leni (700, "пїЅпїЅпїЅ пїЅпїЅ пїЅпїЅпїЅ пїЅпїЅ пїЅпїЅпїЅпїЅпїЅпїЅпїЅ", RGB (243, 210, 24));
    txSleep (2000);
                                                                                  //                 ^^
    for (int t = 0; t < 250; t++)                                     //t     = 0   1  2 3 4 5 6 7 8 9 10                                                                                                                                                                                                                       // i love my Mam  \/
        {                                                             //t % 2 = 0  (1) 0 1 0 1 0 1 0 1 0
        txSetFillColor (TX_BLACK);                                    //
        txClear();

        drow_lest_6 (700, 550,
                     2, 2,
                     5);                                                    // 7 / 2 = пїЅ3 (пїЅ1), пїЅ3 * 2 + пїЅ1 = 7
                                                                      // 1 / 2 = пїЅ0 (пїЅ0), пїЅ0 * 2 + пїЅ0 = 0
        drow_cat (200 + 5 * t, 700 - 2 * t,                           // 1 / 2 = пїЅ1 (пїЅ0), пїЅ1 * 2 + пїЅ0 = 2
                  -1, 1,                                               // 1 / 2 = пїЅ0 (пїЅ1), пїЅ0 * 2 + пїЅ1 = 1
                  30 - (t / 3) % 2 * 30, 50 - (t / 4) % 2 * 15,                                      //
                  5 - (t / 6) % 2 * 10,                                    //   t           =  0 1 2 3 4 5 6 7 8 9 10
                  11, 11,                                                   //   t % 2       =  0 1 0 1 0 1 0 1 0 1 0
                  67 -  (t / 3) % 2 * 30,
                  //57 - t % 2 * 30, 57
                  TX_GREY, TX_GREY);

         txSetColor (RGB (150, 150, 150));

        drow_cat (50, 100,
                  0.2, 0.3,
                  30, 50,
                  5,
                  11, 11,
                  67,
                  150 - t % 2 * 30, 57 - t % 2 * 30);                                                                  //   (t % 2) * 5 =  0 5 0 5 0 5 0 5 0 5 0

        /*drow_stive (400, 270,
                    1, 1,
                    57 - (t / 8) % 2 * 30, 50 - (t / 8) % 2 * 30);*/
                                                                                                                 // t          =  0   1   2   3   4   5   6   7   8   9  10
                                                                                                                 // t % 2      =  0   1   0   1   0   1   0   1   0   1   0
        txSleep (20);                                                                                            // t % 2 * 30 =  0   30  0   30  0   30  0   30  0   30  0
        }

     return 0;

    }


int sen_2()
    {

    for (int t = 0; t < 250; t++)
        {
        txSetFillColor (TX_BLACK);
        txClear();

        drow_lest_6 (100, 550,
                     2, 2,
                     5);

        drow_cat (1445, 202 + t * 4,
                  1, -1 + (2.0 / 250.0) * 2 * t,                                 // 1 - (-1) = 1 + 1 = 2
                  57, 50,                                                    // 2 / 250 = 2.0 / 250.0
                  5,
                  11, 11,
                  67,
                  57, 57);

        drow_leni (900,
                   "пїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅ",
                   RGB (t, t / 2, t / 5));


        txSleep (20);
        }

     return 0;

    }

int sen_22()
    {
    for (int t = 0; t < 250; t++)
        {
        txSetFillColor (TX_BLACK);
        txClear();

       drow_cat (1445, 202 + t * 1,
                  1, 1,                                                      // 1 - (-1) = 1 + 1 = 2
                  57, 50,                                                    // 2 / 250 = 2.0 / 250.0
                  5,
                  11, 11,
                  67,
                  57, 57);

       drow_stive (400 + 3.5 * t, 600,
                    1, 1,
                    57 - (t / 8) % 2 * 30, 50 - (t / 8) % 2 * 30);



        txSleep (20);
        }

    return 0;
    }

int sen_223()
    {
    for (int t = 0; t < 100; t++)
        {
        txSetFillColor (TX_BLACK);
        txClear();

       drow_cat (1445, 451 - t,
                  1, 1,                                                      // 1 - (-1) = 1 + 1 = 2
                  57, 50,                                                    // 2 / 250 = 2.0 / 250.0
                  5,
                  11, 11,
                  67 - (t / 2) % 2 * 15,
                  57, 57);

       drow_stive (1271, 600,                                                               //451 пїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅ пїЅпїЅпїЅпїЅпїЅ пїЅпїЅ пїЅпїЅпїЅпїЅпїЅ пїЅпїЅ y
                    1, 1,                                                                   //1445 пїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅ пїЅпїЅпїЅпїЅпїЅ пїЅпїЅ пїЅпїЅпїЅпїЅпїЅ пїЅпїЅ x
                    57 - (t / 8) % 2 * 30, 50 - (t / 8) % 2 * 30);



        txSleep (20);
        }

    return 0;
    }

int sen_224()
    {
    for (int t = 0; t < 100; t++)
        {
        txSetFillColor (TX_BLACK);
        txClear();

        drow_cat (1445 + 1 * t, 451 + 3 * t,
                  1, 1,                                                      // 1 - (-1) = 1 + 1 = 2
                  57, 50,                                                    // 2 / 250 = 2.0 / 250.0
                  5,
                  11, 11,
                  67 - (t / 2) % 2 * 15,
                  57, 57);

        drow_stive (1271, 600,                                                               //451 пїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅ пїЅпїЅпїЅпїЅпїЅ пїЅпїЅ пїЅпїЅпїЅпїЅпїЅ пїЅпїЅ y
                    1, 1,                                                                   //1445 пїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅ пїЅпїЅпїЅпїЅпїЅ пїЅпїЅ пїЅпїЅпїЅпїЅпїЅ пїЅпїЅ x
                    57 - (t / 8) % 2 * 30, 50 - (t / 8) % 2 * 30);



        txSleep (20);
        }

    return 0;
    }

int sen_225()
    {
    for (int t = 0; t < 180; t++)
        {
        txSetFillColor (TX_BLACK);
        txClear();

        drow_cat (1544 + 6 * t, 748,
                  1, 1,                                                      // 1 - (-1) = 1 + 1 = 2
                  57, 50,                                                    // 2 / 250 = 2.0 / 250.0
                  5,
                  11, 11,
                  67 - (t / 2) % 2 * 15,
                  57, 57);

        drow_stive (1271, 600,                                                               //451 пїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅ пїЅпїЅпїЅпїЅпїЅ пїЅпїЅ пїЅпїЅпїЅпїЅпїЅ пїЅпїЅ y
                    1, 1,                                                                   //1445 пїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅ пїЅпїЅпїЅпїЅпїЅ пїЅпїЅ пїЅпїЅпїЅпїЅпїЅ пїЅпїЅ x
                    57 - (t / 8) % 2 * 30, 50 - (t / 8) % 2 * 30);



        txSleep (20);
        }

    return 0;
    }




int sen_3()
    {
    for (int t = 0; t < 150; t++)
        {
        txSetFillColor (TX_BLACK);
        txClear();

        drow_ctol (1200, 500);

       drow_cat (800 + 1 * t, 800,
                  1, 1,                                                      // 1 - (-1) = 1 + 1 = 2
                  57 - (t / 3) % 2 * 30, 50 - (t / 4) % 2 * 15,
                  5 - (t / 6) % 2 * 10,                          // 2 / 250 = 2.0 / 250.0,
                  11, 11,
                  67,
                  57, 57);

       /*drow_stive (1271, 600,                                                               //451 пїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅ пїЅпїЅпїЅпїЅпїЅ пїЅпїЅ пїЅпїЅпїЅпїЅпїЅ пїЅпїЅ y
                    1, 1,                                                                   //1445 пїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅ пїЅпїЅпїЅпїЅпїЅ пїЅпїЅ пїЅпїЅпїЅпїЅпїЅ пїЅпїЅ x
                    57 - (t / 8) % 2 * 30, 50 - (t / 8) % 2 * 30);*/

        drow_comp (1600, 500,
                   1, 1);


        txSleep (20);
        }

    return 0;
    }

int sen_31()
    {
    for (int t = 0; t < 80; t++)
        {
        txSetFillColor (TX_BLACK);
        txClear();

       drow_ctol (1200, 500);

       drow_comp (1600, 500,
                  1, 1);

       drow_cat (949 + 7 * t, 800 - 5 * t,
                  1, 1,
                                                                      // 1 - (-1) = 1 + 1 = 2
                  57 - (t / 3) % 2 * 30, 50 - (t / 4) % 2 * 15,
                  5 - (t / 6) % 2 * 10,                          // 2 / 250 = 2.0 / 250.0,
                  11, 11,
                  67,
                  57, 57);

       drow_leni (900,
                   "пїЅпїЅпїЅпїЅпїЅ *пїЅпїЅпїЅпїЅ",
                   RGB (79 / 2 * 15, t / 5 * 15, t / 7 * 15));

       /*drow_stive (1271, 600,                                                               //451 пїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅ пїЅпїЅпїЅпїЅпїЅ пїЅпїЅ пїЅпїЅпїЅпїЅпїЅ пїЅпїЅ y
                    1, 1,                                                                   //1445 пїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅ пїЅпїЅпїЅпїЅпїЅ пїЅпїЅ пїЅпїЅпїЅпїЅпїЅ пїЅпїЅ x
                    57 - (t / 8) % 2 * 30, 50 - (t / 8) % 2 * 30);*/

        txSleep (20);
        }

    return 0;
    }

int sen_conec()
    {
    for (int t = 0; t < 80; t++)
        {
        txSetFillColor (RGB (0, 0, 0));
        txClear();

        drow_leni (500,
                   "пїЅпїЅпїЅ пїЅ пїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅ пїЅпїЅпїЅпїЅпїЅ",
                   RGB (79 / 2 * 15, t / 5 * 15, t / 7 * 15));

        drow_leni (700,
                   "пїЅ пїЅпїЅпїЅ пїЅпїЅпїЅпїЅпїЅ пїЅпїЅпїЅпїЅпїЅпїЅпїЅ!!!",
                   RGB (79 / 2 * 15, t / 5 * 15, t / 7 * 15));

        txSleep (20);
        }

    return 0;
    }




int drow_cat (double x, double y, double size_x, double size_y,
              double slide_leg, double slide_y,
              double slide_yxa,
              double slide_nos_y,double slide_nos_x,
              double slide_leg_ggo,
              int color_cat, int color_tail)
    {

    //printf ("x = %lg, y = %lg\n", x, y);

    txSetColor (color_cat, Tolshina);
    txLine ((16  - 300 - slide_leg) * size_x + x, (437 - 280 - slide_y) * size_y + y, (4   - 300 - slide_leg) * size_x + x, (405 - 280 - slide_y) * size_y + y);
    txLine ((4   - 300 - slide_leg) * size_x + x, (405 - 280 - slide_y) * size_y + y, (32  - 300 - slide_leg) * size_x + x, (332 - 280 - slide_y) * size_y + y);
    txLine ((32  - 300 - slide_leg) * size_x + x, (332 - 280 - slide_y) * size_y + y, (68  - 300) * size_x + x, (306 - 280) * size_y + y);
    txLine ((68  - 300) * size_x + x, (306 - 280) * size_y + y, (111 - 300) * size_x + x, (225 - 280) * size_y + y);

    txSetColor (color_tail, Tolshina);
    txLine ((111 - 300) * size_x + x, (225 - 280) * size_y + y, (58  - 300) * size_x + x, (160 - 280) * size_y + y);
    txLine ((58  - 300) * size_x + x, (160 - 280) * size_y + y, (41  - 300) * size_x + x, (89  - 280) * size_y + y);
    txLine ((41  - 300) * size_x + x, (89  - 280) * size_y + y, (18  - 300) * size_x + x, (53  - 280) * size_y + y);
    txLine ((18  - 300) * size_x + x, (53  - 280) * size_y + y, (48  - 300) * size_x + x, (59  - 280) * size_y + y);
    txLine ((48  - 300) * size_x + x, (59  - 280) * size_y + y, (72  - 300) * size_x + x, (90  - 280) * size_y + y);
    txLine ((72  - 300) * size_x + x, (90  - 280) * size_y + y, (92  - 300) * size_x + x, (149 - 280) * size_y + y);
    txLine ((92  - 300) * size_x + x, (149 - 280) * size_y + y, (156 - 300) * size_x + x, (205 - 280) * size_y + y);

    txSetColor (color_cat, Tolshina);
    txLine ((156 - 300) * size_x + x, (205 - 280) * size_y + y, (202 - 300) * size_x + x, (191 - 280) * size_y + y);
    txLine ((202 - 300) * size_x + x, (191 - 280) * size_y + y, (353 - 300) * size_x + x, (215 - 280) * size_y + y);
    txLine ((353 - 300) * size_x + x, (215 - 280) * size_y + y, (396 - 300) * size_x + x, (216 - 280) * size_y + y);
    txLine ((396 - 300) * size_x + x, (216 - 280) * size_y + y, (405 - 300) * size_x + x, (224 - 280) * size_y + y);
    txLine ((405 - 300) * size_x + x, (224 - 280) * size_y + y, (464 - 300) * size_x + x, (217 - 280) * size_y + y);

    txLine ((464 - 300 - slide_yxa * 0.2) * size_x + x, (217 - 280) * size_y + y, (533 - 300 - slide_yxa * 1) * size_x + x, (189 - 280) * size_y + y); //пїЅпїЅпїЅ
    txLine ((533 - 300) * size_x + x, (189 - 280) * size_y + y, (514 - 300 - slide_yxa * 0.5) * size_x + x, (217 - 280) * size_y + y);

    txLine ((514 - 300) * size_x + x, (217 - 280) * size_y + y, (538 - 300) * size_x + x, (237 - 280) * size_y + y); // пїЅпїЅпїЅ-пїЅпїЅ пїЅпїЅпїЅпїЅпїЅ пїЅпїЅпїЅпїЅпїЅ пїЅ пїЅпїЅпїЅпїЅ

    txLine ((538 - 300) * size_x + x, (237 - 280) * size_y + y, (549 - 300 + slide_nos_x) * size_x + x, (283 - 280 - slide_nos_y) * size_y + y); // пїЅпїЅпїЅ
    txLine ((549 - 300 + slide_nos_x) * size_x + x, (283 - 280 - slide_nos_y) * size_y + y, (523 - 300) * size_x + x, (300 - 280) * size_y + y);

    txLine ((523 - 300) * size_x + x, (300 - 280) * size_y + y, (487 - 300) * size_x + x, (292 - 280) * size_y + y);
    txLine ((487 - 300) * size_x + x, (292 - 280) * size_y + y, (467 - 300) * size_x + x, (302 - 280) * size_y + y);
    txLine ((467 - 300) * size_x + x, (302 - 280) * size_y + y, (480 - 300) * size_x + x, (318 - 280) * size_y + y);

    txLine ((480 - 300)                    * size_x + x, (318 - 280)           * size_y + y, (487 - 300 - slide_leg * 0.3) * size_x + x, (350 - 280 - slide_y * 0.9) * size_y + y); // пїЅпїЅпїЅпїЅпїЅпїЅпїЅ пїЅпїЅпїЅпїЅ
    txLine ((488 - 300 - slide_leg  * 0.3) * size_x + x, (352 - 280 - slide_y) * size_y + y, (554 - 300 - slide_leg)       * size_x + x, (420 - 280 - slide_y * 1)   * size_y + y);
    txLine ((554 - 300 - slide_leg)        * size_x + x, (420 - 280 - slide_y) * size_y + y, (574 - 300 - slide_leg)       * size_x + x, (429 - 280 - slide_y * 1)   * size_y + y);
    txLine ((574 - 300 - slide_leg)        * size_x + x, (429 - 280 - slide_y) * size_y + y, (577 - 300 - slide_leg)       * size_x + x, (444 - 280 - slide_y * 1)   * size_y + y); txCircle ((577 - 300) * size_x + x, (444 - 280) * size_y + y, 30);
    txLine ((577 - 300 - slide_leg)        * size_x + x, (444 - 280 - slide_y) * size_y + y, (541 - 300 - slide_leg)       * size_x + x, (445 - 280 - slide_y * 1)   * size_y + y); //   пїЅпїЅпїЅпїЅпїЅ пїЅпїЅпїЅпїЅпїЅ txCircle ((541 - 300) * size_x + x, (445 - 280) * size_y + y, 5);
    txLine ((541 - 300 - slide_leg)        * size_x + x, (445 - 280 - slide_y) * size_y + y, (401 - 300)                   * size_x + x, (342 - 280 - slide_y * 0.1) * size_y + y);

    txLine ((401 - 300) * size_x + x, (342 - 280) * size_y + y, (200 - 300) * size_x + x, (349 - 280) * size_y + y);

    txLine ((324 - 300)             * size_x + x, (349 - 280)           * size_y + y, (319 - 300 + slide_leg) * size_x + x, (443 - 280 + slide_y) * size_y + y);
    txLine ((319 - 300 + slide_leg) * size_x + x, (443 - 280 + slide_y) * size_y + y, (361 - 300 + slide_leg) * size_x + x, (444 - 280 + slide_y) * size_y + y);
    txLine ((361 - 300 + slide_leg) * size_x + x, (444 - 280 + slide_y) * size_y + y, (358 - 300 + slide_leg) * size_x + x, (429 - 280 + slide_y) * size_y + y);
    txLine ((358 - 300 + slide_leg) * size_x + x, (429 - 280 + slide_y) * size_y + y, (343 - 300 + slide_leg) * size_x + x, (420 - 280 + slide_y) * size_y + y);
    txLine ((343 - 300 + slide_leg) * size_x + x, (420 - 280 + slide_y) * size_y + y, (375 - 300)             * size_x + x, (348 - 280)           * size_y + y);

    txLine ((200 - 300)                 * size_x + x, (349 - 280) * size_y + y, (170 - 300 - slide_leg_ggo) * size_x + x, (393 - 280) * size_y + y);      // пїЅпїЅпїЅпїЅпїЅпїЅ пїЅпїЅпїЅпїЅ
    txLine ((170 - 300 - slide_leg_ggo) * size_x + x, (393 - 280) * size_y + y, (189 - 300 - slide_leg_ggo) * size_x + x, (421 - 280) * size_y + y);
    txLine ((189 - 300 - slide_leg_ggo) * size_x + x, (421 - 280) * size_y + y, (210 - 300 - slide_leg_ggo) * size_x + x, (428 - 280) * size_y + y);
    txLine ((210 - 300 - slide_leg_ggo) * size_x + x, (428 - 280) * size_y + y, (215 - 300 - slide_leg_ggo) * size_x + x, (444 - 280) * size_y + y);
    txLine ((215 - 300 - slide_leg_ggo) * size_x + x, (444 - 280) * size_y + y, (176 - 300 - slide_leg_ggo) * size_x + x, (445 - 280) * size_y + y);
    txLine ((176 - 300 - slide_leg_ggo) * size_x + x, (445 - 280) * size_y + y, (125 - 300 - slide_leg_ggo) * size_x + x, (396 - 280) * size_y + y);
    txLine ((125 - 300 - slide_leg_ggo) * size_x + x, (396 - 280) * size_y + y, (136 - 300)                 * size_x + x, (350 - 280) * size_y + y);

    // пїЅпїЅпїЅпїЅпїЅпїЅ пїЅпїЅпїЅпїЅ 2
    txLine ((134 - 300)             * size_x + x, (345 - 280)           * size_y + y, (56  - 300 - slide_leg) * size_x + x, (364 - 280 - slide_y) * size_y + y);
    txLine ((56  - 300 - slide_leg) * size_x + x, (364 - 280 - slide_y) * size_y + y, (30  - 300 - slide_leg) * size_x + x, (407 - 280 - slide_y) * size_y + y);
    txLine ((30  - 300 - slide_leg) * size_x + x, (407 - 280 - slide_y) * size_y + y, (32  - 300 - slide_leg) * size_x + x, (428 - 280 - slide_y) * size_y + y);            //txSetColor (TX_, 3);
    txLine ((32  - 300 - slide_leg) * size_x + x, (428 - 280 - slide_y) * size_y + y, (16  - 300 - slide_leg) * size_x + x, (437 - 280 - slide_y) * size_y + y);

    //txCircle ((300 - 300) + x, 280 - 280 + y, 10);

    return 0;

    }


int drow_misca()
    {

    /*txLine (724,  520, 639,  367);
    txLine (639,  367, 639,  227);
    txLine (639,  227, 734,   86);
    txLine (734,  86,  961,   91);
    txLine (961,  91, 1053,  231);
    txLine (1053, 231, 1056, 352);
    txLine (1056, 352, 964,  524);
    txLine (964,  524, 724,  520);
    txLine (724,  520, 667,  522);
    txLine (667,  522, 590,  372);
    txLine (590,  372, 588,  224);
    txLine (588,  224, 706,   53);
    txLine (706,  53,  977,   57);
    txLine (977,  57,  1103, 226);
    txLine (1103, 226, 1103, 362);
    txLine (1103, 362, 1021, 528);
    txLine (1021, 528, 953,  584);
    txLine (953,  584, 720,  581);
    txLine (720,  581, 666,  520);
    txLine (508, 372, 577, 310);
    txCircle (650, 300, 30);
    //txLine (585, 291, 808, 300);
    txLine (708, 311, 708, 372);
    txLine (708, 372, 508, 372);*/

    return 0;
    }

int drow_comp (double x, double y, double size_x, double size_y)
    {

     //txLine (1285, 337, 1260, 536);
     txSetColor (TX_WHITE, Tolshina);
     txLine ((1260 - 1400) * size_x + x, (536  - 600) * size_y + y, (1266 - 1400) * size_x + x, (560 - 600) * size_y + y);
     txLine ((1266 - 1400) * size_x + x, (560  - 600) * size_y + y, (1244 - 1400) * size_x + x, (562 - 600) * size_y + y);
     txLine ((1244 - 1400) * size_x + x, (562  - 600) * size_y + y, (1092 - 1400) * size_x + x, (656 - 600) * size_y + y);
     txLine ((1092 - 1400) * size_x + x, (656  - 600) * size_y + y, (1095 - 1400) * size_x + x, (676 - 600) * size_y + y);
     txLine ((1095 - 1400) * size_x + x, (676  - 600) * size_y + y, (1473 - 1400) * size_x + x, (791 - 600) * size_y + y);
     txLine ((1473 - 1400) * size_x + x, (791  - 600) * size_y + y, (1496 - 1400) * size_x + x, (794 - 600) * size_y + y);
     txLine ((1496 - 1400) * size_x + x, (794  - 600) * size_y + y, (1606 - 1400) * size_x + x, (638 - 600) * size_y + y);
     txLine ((1606 - 1400) * size_x + x, (638  - 600) * size_y + y, (1648 - 1400) * size_x + x, (348 - 600) * size_y + y);
     txLine ((1648 - 1400) * size_x + x, (348  - 600) * size_y + y, (1650 - 1400) * size_x + x, (331 - 600) * size_y + y);
     txLine ((1650 - 1400) * size_x + x, (307  - 600) * size_y + y, (1248 - 1400) * size_x + x, (307 - 600) * size_y + y);
     txLine ((1248 - 1400) * size_x + x, (307  - 600) * size_y + y, (1260 - 1400) * size_x + x, (540 - 600) * size_y + y);
     txLine ((1260 - 1400) * size_x + x, (540  - 600) * size_y + y, (1248 - 1400) * size_x + x, (554 - 600) * size_y + y);
     txLine ((1248 - 1400) * size_x + x, (554  - 600) * size_y + y, (1078 - 1400) * size_x + x, (667 - 600) * size_y + y);
     txLine ((1078 - 1400) * size_x + x, (667  - 600) * size_y + y, (1493 - 1400) * size_x + x, (795 - 600) * size_y + y);
     txLine ((1271 - 1400) * size_x + x, (566  - 600) * size_y + y, (1195 - 1400) * size_x + x, (615 - 600) * size_y + y);
     txLine ((1195 - 1400) * size_x + x, (615  - 600) * size_y + y, (1520 - 1400) * size_x + x, (697 - 600) * size_y + y);
     txLine ((1520 - 1400) * size_x + x, (697  - 600) * size_y + y, (1571 - 1400) * size_x + x, (629 - 600) * size_y + y);
     txLine ((1571 - 1400) * size_x + x, (629  - 600) * size_y + y, (1262 - 1400) * size_x + x, (564 - 600) * size_y + y);

     txLine ((1253 - 1400) * size_x + x, (657  - 600) * size_y + y, (1378 - 1400) * size_x + x, (691 - 600) * size_y + y); // пїЅпїЅпїЅпїЅпїЅпїЅ
     txLine ((1378 - 1400) * size_x + x, (691  - 600) * size_y + y, (1338 - 1400) * size_x + x, (731 - 600) * size_y + y);
     txLine ((1338 - 1400) * size_x + x, (731  - 600) * size_y + y, (1211 - 1400) * size_x + x, (691 - 600) * size_y + y);
     txLine ((1211 - 1400) * size_x + x, (691  - 600) * size_y + y, (1252 - 1400) * size_x + x, (658 - 600) * size_y + y);

     //txLine ((1285, 530, 1308, 338 - 600 + y);
     //txLine ((1308, 338, 1627, 362 - 600 + y);
     //txLine ((1627, 362, 1593, 590 - 600 + y);

     txLine ((1285 - 1400) * size_x + x, (531  - 600) * size_y + y, (1285 - 1400) * size_x + x, (530 - 600) * size_y + y);
     txLine ((1267 - 1400) * size_x + x, (338  - 600) * size_y + y, (1626 - 1400) * size_x + x, (346 - 600) * size_y + y);
     txLine ((1626 - 1400) * size_x + x, (346  - 600) * size_y + y, (1590 - 1400) * size_x + x, (590 - 600) * size_y + y);
     txLine ((1590 - 1400) * size_x + x, (590  - 600) * size_y + y, (1273 - 1400) * size_x + x, (529 - 600) * size_y + y);
     txLine ((1273 - 1400) * size_x + x, (529  - 600) * size_y + y, (1266 - 1400) * size_x + x, (337 - 600) * size_y + y);

     //txCircle ((1400 - 1400) * size_x + x, (600 - 600) * size_y + y, 10);

     return 0;

     }

int drow_miscaar()
    {
    txLine ((92), 554, 506, 552);
    txLine ((506), 552, 556, 698);
    txLine ((22), 701, 91, 554);
    txLine ((91), 554, 121, 630);
    txLine ((121), 630, 474, 628);
    txLine ((474), 628, 506, 558);
    txLine ((474), 628, 497, 692);
    txLine ((89), 695, 121, 634);
    txLine ((571), 696, 28, 697);
    txLine ((28), 697, 58, 771);
    txLine ((58), 771, 521, 771);
    txLine ((521), 771, 575, 701);
    txCircle (300, 500, 10);

    return 0;

    }

int drow_lest (double x, double y)
    {
    txLine (364 - 360 + x, 363 - 327 + y, 540 - 360 + x, 422 - 327 + y);
    txLine (540 - 360 + x, 422 - 327 + y, 538 - 360 + x, 380 - 327 + y);
    txLine (538 - 360 + x, 380 - 327 + y, 359 - 360 + x, 329 - 327 + y);
    txLine (359 - 360 + x, 329 - 327 + y, 359 - 360 + x, 363 - 327 + y);
    txLine (359 - 360 + x, 329 - 327 + y, 418 - 360 + x, 313 - 327 + y);
    txLine (418 - 360 + x, 313 - 327 + y, 590 - 360 + x, 367 - 327 + y);
    txLine (590 - 360 + x, 367 - 327 + y, 540 - 360 + x, 377 - 327 + y);
    txCircle (360 - 360 + x, 327 - 327 + y, 10);

    return 0;

    }

int drow_lest_6 (double x, double y, double size_x, double size_y, double tolshina)
    {
    txSetColor (TX_BROWN, tolshina);
    drow_lestnica52 (0   * size_x + x, 0    * size_y + y, size_x, size_y);
    drow_lestnica52 (55  * size_x + x, -55  * size_y + y, size_x, size_y);
    drow_lestnica52 (110 * size_x + x, -110 * size_y + y, size_x, size_y);
    drow_lestnica52 (165 * size_x + x, -165 * size_y + y, size_x, size_y);
    drow_lestnica52 (220 * size_x + x, -220 * size_y + y, size_x, size_y);
    drow_lestnica52 (275 * size_x + x, -275 * size_y + y, size_x, size_y);
    txSetFillColor  (TX_GREEN);
    txCircle        (0   * size_x + x, 0    * size_y + y, 10);


    return 0;

    }
int drow_lestnica52 (double x, double y, double size_x, double size_y)
    {
    txLine (4   * size_x + x, 36  * size_y + y, 180 * size_x + x, 95  * size_y + y);
    txLine (180 * size_x + x, 95  * size_y + y, 178 * size_x + x, 53  * size_y + y);
    txLine (178 * size_x + x, 53  * size_y + y, -1  * size_x + x, 2   * size_y + y);
    txLine (-1  * size_x + x, 2   * size_y + y, -1  * size_x + x, 36  * size_y + y);
    txLine (-1  * size_x + x, 2   * size_y + y, 58  * size_x + x, -14 * size_y + y);
    txLine (58  * size_x + x, -14 * size_y + y, 230 * size_x + x, 40  * size_y + y);
    txLine (230 * size_x + x, 40  * size_y + y, 180 * size_x + x, 50  * size_y + y);
    txSetFillColor (TX_RED);
    txCircle (0 * size_x + x, 0 * size_y + y, 10);

    return 0;

    }

int drow_stive (double x, double y, double size_x, double size_y, double slide_ster, double slide_sten)
    {
    //printf ("x = %lg, y = %lg\n", x, y);
    txSetColor (TX_YELLOW, Tolshina); txLine (-15 * size_x + x, -122 * size_y + y, 204 * size_x + x, -34 - slide_ster * size_y + y); //пїЅпїЅпїЅпїЅ
    txSetColor (TX_ORANGE, Tolshina); txLine (204 * size_x + x, -34 - slide_ster * size_y + y, 188 * size_x + x, -34 - slide_ster * size_y + y);
    txSetColor (TX_BROWN,  Tolshina); txLine (192 * size_x + x, -30 - slide_ster * size_y + y, -36 * size_x + x, -120 * size_y + y);
    txSetColor (TX_LIGHTRED, Tolshina); txLine (-36 * size_x + x, -120 * size_y + y, -64 * size_x + x, -46 * size_y + y);
    txSetColor (TX_WHITE, Tolshina); txLine (-64 * size_x + x, -46 * size_y + y, 160 * size_x + x, 49 - slide_ster * size_y + y);
    txSetColor (TX_LIGHTGREEN, Tolshina); txLine (160 * size_x + x, 49 - slide_ster * size_y + y, 177 * size_x + x, 42 - slide_ster * size_y + y);
    txSetColor (TX_LIGHTBLUE, Tolshina); txLine (177 * size_x + x, 42 - slide_ster * size_y + y, 205 * size_x + x, -32 - slide_ster * size_y + y);
    txSetColor (TX_PINK, Tolshina); txLine (190 * size_x + x, -29 - slide_ster * size_y + y, 163 * size_x + x, 49 - slide_ster * size_y + y);

    txSetColor (TX_PINK, Tolshina); txLine (50 * size_x + x, -95 * size_y + y, 60 * size_x + x, 96 * size_y + y); //пїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅ
    txSetColor (TX_LIGHTBLUE, Tolshina); txLine (60 * size_x + x, 96 * size_y + y, -62 * size_x + x, 109 * size_y + y);
    txSetColor (TX_LIGHTGREEN, Tolshina); txLine (-62 * size_x + x, 109 * size_y + y, -63 * size_x + x, -95 * size_y + y);
    txSetColor (TX_WHITE, Tolshina); txLine (-63 * size_x + x, -95 * size_y + y, 50 * size_x + x, -95 * size_y + y);
    txSetColor (TX_LIGHTRED, Tolshina); txLine (12 * size_x + x, 108 * size_y + y, 12 * size_x + x, -70 * size_y + y);
    //txCircle(400, 270, 10);

    //txLine (412, 380, 388, 380 * size_y + y);
    //txLine (388, 380, 388, 193 * size_y + y);
    //txLine (388, 193, 347, 191 * size_y + y);
    txLine (9 * size_x + x, 108 * size_y + y, -64 * size_x + x, 108 * size_y + y);

    txSetColor (TX_YELLOW, Tolshina); txLine (-63 * size_x + x, 109 * size_y + y, -61 - slide_sten * size_x + x, 375 * size_y + y); //пїЅпїЅпїЅпїЅ
    txSetColor (TX_ORANGE, Tolshina); txLine (-61 - slide_sten * size_x + x, 375 * size_y + y, 18 * size_x + x, 377 * size_y + y);
    txSetColor (TX_BROWN,  Tolshina); txLine (11 * size_x + x, 107 * size_y + y, 11 * size_x + x, 113 * size_y + y);
    txSetColor (TX_LIGHTRED, Tolshina); txLine (11 * size_x + x, 113 * size_y + y, 30 * size_x + x, 113 * size_y + y);
    txSetColor (TX_WHITE, Tolshina); txLine (30 * size_x + x, 113 * size_y + y, 31 - slide_sten * 0.4 * size_x + x, 362 * size_y + y);
    txSetColor (TX_LIGHTGREEN, Tolshina); txLine (31 - slide_sten * 0.3 * size_x + x, 362 * size_y + y, 49 - slide_sten * 0.3 * size_x + x, 343 * size_y + y);
    txSetColor (TX_LIGHTBLUE, Tolshina); txLine (49 - slide_sten * 0.4 * size_x + x, 343 * size_y + y, 49 * size_x + x, 95 * size_y + y);
    txSetColor (TX_PINK, Tolshina); txLine (49 * size_x + x, 95 * size_y + y, 11 * size_x + x, 111 * size_y + y);
    txSetColor (TX_GREY, Tolshina); txLine (11 * size_x + x, 111 * size_y + y, -63 * size_x + x, 109 * size_y + y);

    double x0 = -400;
    double y0 = -300;

    russ_line (325 + x + x0, 34  + y + y0, 467 + x + x0, 18  + y + y0, TX_PINK,      Tolshina);
    russ_line (467 + x + x0, 18  + y + y0, 490 + x + x0, 168 + y + y0, TX_BROWN,     Tolshina);
    russ_line (490 + x + x0, 168 + y + y0, 336 + x + x0, 189 + y + y0, TX_GREEN,     Tolshina);
    russ_line (336 + x + x0, 189 + y + y0, 301 + x + x0, 195 + y + y0, TX_LIGHTBLUE, Tolshina);
    russ_line (301 + x + x0, 195 + y + y0, 283 + x + x0, 52  + y + y0, TX_RED,       Tolshina);
    russ_line (283 + x + x0, 52  + y + y0, 326 + x + x0, 33  + y + y0, TX_ORANGE,    Tolshina);

    return 0;

    }

int russ_line (double x1, double y1, double x2, double y2, double color, double tol)
    {
    txSetColor (color, tol);

    txLine                                        (x1, y1, x2, y2);
  //printf ("x1 = %d, y1 = %d, x2 = %d, y2 = %d\n",x1, y1, x2, y2);

    return 0;
    }


int drow_syb()
    {
    txSetTextAlign (TA_CENTER);
    txSetColor (TX_WHITE, Tolshina);
    txSelectFont ("Comic Sans MS", 140);
    txTextOut (1000, 700, "-- пїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅ");

    txSetTextAlign();

    return 0;

    }

int drow_sybr()
    {
    txSetFillColor (TX_BLACK);
    txSelectFont ("Comic Sans MS", 140);
    txTextOut (1000, 700, "-- пїЅпїЅпїЅпїЅ, пїЅпїЅпїЅ пїЅпїЅпїЅпїЅ");

    txSetTextAlign();

    return 0;

    }

int drow_sybry()
    {
    txSetFillColor (TX_BLACK);
    txSelectFont ("Comic Sans MS", 140);
    txTextOut (1000, 700, "-- пїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅ, пїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅ, пїЅпїЅпїЅпїЅпїЅпїЅпїЅпїЅ,");

    txSetTextAlign();

    return 0;

    }

int drow_leni (int y, const char text[], int color)
    {
    txSetTextAlign();
    txSetColor (color);
    txSelectFont ("Comic Sans MS", 140);
    txTextOut (1000, y, text);

    return 0;

    }

int drow_ctol(int x, int y)
    {
    txSetColor (TX_RED, Tolshina);
    txLine (98  + x, 578 + y, 65  + x, 154 + y);
    txLine (65  + x, 154 + y, 641 + x, 143 + y);
    txLine (641 + x, 143 + y, 644 + x, 587 + y);
    txLine (586 + x, 470 + y, 582 + x, 211 + y);
    txLine (582 + x, 211 + y, 121 + x, 219 + y);
    txLine (121 + x, 219 + y, 136 + x, 467 + y);
    txSetColor (TX_WHITE, Tolshina);
    txCircle (1530, 675, 20);


    return 0;
    }
