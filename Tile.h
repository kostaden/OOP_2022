#ifndef Tile_H
#define Tile_H
#include "Board.h"
#include <iostream>
#include <string>
using namespace std;


class Tile: private Board{

int x;
int y;

public:

Tile(x, y)

void createTiles(int grid[10][10]){
    for (int row =0; row <10; row++){
        for (int col = 0; col < 10; col++){
             = grid[row][col] = 0;
        }
    }
};
#endif