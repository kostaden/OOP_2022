#ifndef Board_H
#define Board_H
#include "Tile.h"
#include <iostream>
using namespace std;

class board: public tile{
    public:
        tile grid[10][10];
        board();

        void initBoard(){
            for(int x = 0; x < 10; x++){
                for(int y = 0; y < 10; y++){
                    grid[x][y].status = 0;
                    grid[x][y].xpos = x;
                    grid[x][y].ypos = y;
                }
            }
        return;
        }

        
        void printBoard(){
            cout << "  1 2 3 4 5 6 7 8 9 10" << endl;
            char rowLabel = '1';
            for (int row = 0; row <10; row++){
                cout << rowLabel << " ";
                rowLabel++;
                for (int col = 0; col <10; col++){
                    cout << grid[row][col].status << " ";
                }
                cout << endl;
            }
            return;
        }
};

#endif