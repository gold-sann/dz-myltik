#include "TXLib.h"

int drow_cat();

int main()
    {

    txCreateWindow (1300, 800);

    drow_cat();
    }

int drow_cat()
    {

    txLine (16,  437,  4,   405);
    txLine (4,   405,  32,  332);
    txLine (32,  332,  68,  306);
    txLine (68,  306,  111, 225);
    txLine (111, 225,  58,  160);
    txLine (58,  160,  41,   89);
    txLine (41,  89,   18,   53);
    txLine (18,  53,   48,   59);
    txLine (48,  59,   72,   90);

    return 0;

    }
