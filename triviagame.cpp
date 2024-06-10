#include<iostream>
#include<fstream>
#include<cstdlib>
#include<windows.h>
#include"EASY.h"
#include"MEDIUM.h"
#include"HARD.h"
#include"OPTIONS.h"
using namespace std;
int main(){
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h,5);
    cout<<"\t\tHi!, Welcome to the Game."<<endl;
    cout<<"\tThis game is designed for FUN and your INTELLECTUAL KNOWLEDGE."<<endl;
    SetConsoleTextAttribute(h,7);
    options();
return 0;
}