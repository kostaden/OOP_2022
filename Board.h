#ifndef Board_H
#define Board_H
#include "Tile.h"
#include <iostream>
using namespace std;

class Board: public Tile{
    public:
        Tile grid[10][10];
        Board();

        void initBoard();
        void printBoard();
};

#endif