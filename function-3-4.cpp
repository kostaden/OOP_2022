//Function that given a character 'A,B,C,D,E' representing a grade, uses a switch statement to print out if its a pass or fail.
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

void print_pass_fail(char grade){


            switch(grade){
                case 'A':
                    cout<<"Pass" <<endl;
                    break;
                case 'B':
                    cout<<"Pass" <<endl;
                    break;
                case 'C':
                    cout<<"Pass" <<endl;
                    break;
                case 'D':
                    cout<<"Fail" <<endl;
                    break;
                case 'E':
                    cout<<"Fail" <<endl;
                    break;
                default:
                    cout<<"Nothing" <<endl;
            }
        }
        

