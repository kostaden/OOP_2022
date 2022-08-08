#include <iostream>
using namespace std;

void print_class(std::string courses[4], std::string students[], std::string report_card[][4], int nstudents){


    cout << "Report Card";

    for (int i=0; i <4;i++){
        cout << " " << courses[i] ;
    }
    cout << endl;

    for(int j =0; j < nstudents;j++){
        cout << students[j] << endl;
    }

    for(int a=0; a < 4; a++){
        for(int b=0; b < nstudents; b++){
            cout << " " << report_card[a][b];
        }
    cout << endl;
    }
}