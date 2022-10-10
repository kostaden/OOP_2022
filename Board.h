#ifndef Board_H
#define Board_H
#include <iostream>
#include <string>
using namespace std;


class Board{



    private:

        int board[10][10];

    public:
        //Initialise 10x10 board, filled with 0s
        Board(){
            for (int row = 0; row <10; row++){
                for (int col = 0; col <10; col++){
                    board[row][col] = 0;
                }
            }
        }
    //Print board
    void print_board(){
        cout << " 0 1 2 3 4 5 6 7 8 9" << endl;
        char rowLabel = 'A';
        for (int row = 0; row <10; row++){
            cout << rowLabel << " ";
            rowLabel++;
            for (int col = 0; col <10; col++){
                cout << board[row][col] << " ";
            }
            cout << endl;
        }
    }

};
#endif
