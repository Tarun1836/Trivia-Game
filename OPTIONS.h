#include<iostream>
#include<windows.h>
#include<cstdlib>
#include<fstream>
#include<sstream>
using namespace std;
void instructions();
void options();
void game();
void game()
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    int level,topic;
    cout<<"Select the difficulty level..."<<endl;
    SetConsoleTextAttribute(h,9);
    cout<<"1) EASY"<<endl;
    SetConsoleTextAttribute(h,10);
    cout<<"2) MEDIUM"<<endl;
    SetConsoleTextAttribute(h,12);
    cout<<"3) HARD"<<endl;
    SetConsoleTextAttribute(h,7);
    cin>>level;
    system("cls");
    switch(level) 
    {
        case 1:
        cout<<"You choose EASY."<<endl;
        cout<<"There are 3 topics in total."<<endl;
        cout<<"1) ANIME"<<endl;
        cout<<"2) GAMES"<<endl;
        cout<<"3) MIX"<<endl;
        cin>>topic;
        system("cls");
        if(topic==1)
        {
            animeEASY();
        }
        else if(topic==2)
        {
            gamesEASY();
        }
        else
        {
            mixEASY();
        }
        break;

        case 2:
        cout<<"You choose MEDIUM."<<endl;
        cout<<"There are 3 topics in total."<<endl;
        cout<<"1) ANIME"<<endl;
        cout<<"2) GAMES"<<endl;
        cout<<"3) MIX"<<endl;
        cin>>topic;
        system("cls");
        if(topic==1)
        {
            animeMEDIUM();
        } 
        else if(topic==2)
        {
            gamesMEDIUM();
        }
        else 
        {
            mixMEDIUM();
        }
        break;
        
        case 3:
        cout<<"You choose HARD."<<endl;
        cout<<"There are 3 topics in total."<<endl;
        cout<<"1) ANIME"<<endl;
        cout<<"2) GAMES"<<endl;
        cout<<"3) MIX"<<endl;
        cin>>topic;
        system("cls");
        if(topic==1)
        {
            animeHARD();
        }
        else if(topic==2)
        {
            gamesHARD();
        }
        else 
        {
            mixHARD();
        }
        break;
    }
}
void options()
{
    char b;
    cout<<"Press Y/y to enter the game."<<endl;
    cout<<"Press I/i to view instructions."<<endl;
    cout<<"Press Q/q to quit the game"<<endl;
    cout<<"Press S/s to view previous scores."<<endl;
    cin>>b;
    system("cls");
    if(b == 'I' || b == 'i')
    {
        instructions();
    }
    else if(b=='Y' || b=='y')
    {
        game();
    }
    else if(b=='S' || b=='s')
    {
        char a;
        ifstream file;
        file.open("score.txt");
        stringstream buffer;
        buffer<<file.rdbuf();
        string file_contents;
        file_contents = buffer.str();
        cout<<file_contents;
        file.close();
        cout<<"Press M/m to go to main screen."<<endl;
        cin>>a;
        system("cls");
        if(a=='M' || a=='m')
        {
            options();
        }
    }
}
void instructions()
{
    char choice;
    cout<<"It is a very simple game."<<endl;
    cout<<"All you have to do is answer some questions"<<endl;
    cout<<"Questions will be in form of MCQ's"<<endl;
    cout<<"you will get 1 point for correct answer and 0 points fo incorrect answer."<<endl;
    cout<<"You can choose the difficulty level and the topic."<<endl;
    cout<<"At the end your score will be saved and displayed."<<endl;
    cout<<"GOOD LUCK :)"<<endl;
    cout<<"Press M/m to go to the main screen."<<endl;
    cin>>choice;
    system("cls");
    if(choice == 'M' || choice=='m')
    {
        options();
    }
}
void score()
{
    
}