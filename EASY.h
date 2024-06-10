#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
#include<windows.h>
using namespace std;
void options();
void animeEASY(){
    int score=0,i;
    char a;
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
            cout<<"You choose ANIME. The quiz begins NOW."<<endl;
            system("pause");
            system("cls");
            cout<<"1. Who is the main protagonist of DRAGON BALL Series?"<<endl;
            
            cout<<"A) GOKU" <<endl;
            cout<<"B) VEGETA"<<endl;
            cout<<"C) ZENO"<<endl;
            cout<<"D) GRAND PRIEST"<<endl;
            cin>>a;
            if(a=='A' || a=='a')
            {
                SetConsoleTextAttribute(h,2);
                cout<<"CORRECT ANSWER!!";
                SetConsoleTextAttribute(h,7);
                cout<<"Next question is in"<<endl;
                for(i=3;i>0;i--)
                {
                    cout<<i<<"...";
                    Sleep(1000);
                }
                system("cls");
                score++;
            }
            else
            {
                SetConsoleTextAttribute(h,4);
                cout<<"WRONG ANSWER!!";
                SetConsoleTextAttribute(h,7);
                cout<<" 'A' is the correct answer!"<<endl;
                for(i=3;i>0;i--)
                {
                    cout<<i<<"...";
                    Sleep(1000);
                }
                system("cls");
            }
            cout<<"2. Which character is known as the Prince of all Saiyans?"<<endl;
            
            cout<<"A) RADITZ"<<endl;
            cout<<"B) BROLY"<<endl;
            cout<<"C) VEGETA"<<endl;
            cout<<"D) KING VEGETA"<<endl;
            cin>>a;
            if(a=='C' || a=='c')
            {
                SetConsoleTextAttribute(h,2);
                cout<<"CORRECT ANSWER!!";
                SetConsoleTextAttribute(h,7);
                cout<<"Next question is in"<<endl;
                for(i=3;i>0;i--)
                {
                    cout<<i<<"...";
                    Sleep(1000);
                }
                system("cls");
                score++;
            }
            else
            {
                SetConsoleTextAttribute(h,4);
                cout<<"WRONG ANSWER!!";
                SetConsoleTextAttribute(h,7);
                cout<<" 'C' is the correct answer!"<<endl;
                for(i=3;i>0;i--)
                {
                    cout<<i<<"...";
                    Sleep(1000);
                }
                system("cls");
            }
            cout<<"3. What is the name of Luffy's signature attack??"<<endl;
            
            cout<<"A) Gum-Gum Red Hawk"<<endl;
            cout<<"B) Gum-Gum pistol"<<endl;
            cout<<"C) Gum-Gum Monkey God Gun"<<endl;
            cout<<"D) Gum-Gum Bazooka"<<endl;
            cin>>a;
            if(a=='B' || a=='b')
            {
                SetConsoleTextAttribute(h,2);
                cout<<"CORRECT ANSWER!!";
                SetConsoleTextAttribute(h,7);
                cout<<"Next question is in"<<endl;
                for(i=3;i>0;i--)
                {
                    cout<<i<<"...";
                    Sleep(1000);
                }
                system("cls");
                score++;
            }
            else
            {
                SetConsoleTextAttribute(h,4);
                cout<<"WRONG ANSWER!!";
                SetConsoleTextAttribute(h,7);
                cout<<" 'B' is the correct answer!"<<endl;
                for(i=3;i>0;i--)
                {
                    cout<<i<<"...";
                    Sleep(1000);
                }
                system("cls");
            }
            cout<<"4. Who is the first Gym Leader in the Kanto region? ?"<<endl;
            
            cout<<"A) MISTY"<<endl;
            cout<<"B) GIOVANNI"<<endl;
            cout<<"C) BLAINE"<<endl;
            cout<<"D) BROCK"<<endl;
            cin>>a;
            if(a=='D' || a=='d')
            {
                SetConsoleTextAttribute(h,2);
                cout<<"CORRECT ANSWER!!";
                SetConsoleTextAttribute(h,7);
                cout<<"Next question is in"<<endl;
                for(i=3;i>0;i--)
                {
                    cout<<i<<"...";
                    Sleep(1000);
                }
                system("cls");
                score++;
            }
            else
            {
                SetConsoleTextAttribute(h,4);
                cout<<"WRONG ANSWER!!";
                SetConsoleTextAttribute(h,7);
                cout<<" 'D' is the correct answer!"<<endl;
                for(i=3;i>0;i--)
                {
                    cout<<i<<"...";
                    Sleep(1000);
                }
                system("cls");
            }
            cout<<"5. What is Tanjiro's greatest sense?"<<endl;

            cout<<"A) SIGHT"<<endl;
            cout<<"B) TASTE"<<endl;
            cout<<"C) SMELL"<<endl;
            cout<<"D) HEARING"<<endl;
            cin>>a;
            if(a=='C' || a=='c')
            {
                SetConsoleTextAttribute(h,2);
                cout<<"CORRECT ANSWER!!";
                SetConsoleTextAttribute(h,7);
                for(i=3;i>0;i--)
                {
                    cout<<i<<"...";
                    Sleep(1000);
                }
                system("cls");
                score++;
            }
            else
            {
                SetConsoleTextAttribute(h,4);
                cout<<"WRONG ANSWER!!";
                SetConsoleTextAttribute(h,7);
                cout<<" 'C' is the correct answer!"<<endl;
                for(i=3;i>0;i--)
                {
                    cout<<i<<"...";
                    Sleep(1000);
                }
                system("cls");
            }
            cout<<"Your score is: "<<score<<endl;
            system("pause");
            system("cls");
            options();
            ofstream file("score.txt" , ios::in | ios::out | ios::app);
            file<<"EASY        ANIME        "<<score <<endl;
            file.close();
}
void gamesEASY(){
    int score=0,i;
    char a;
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
            cout<<"You choose GAMES. The quiz begins NOW."<<endl;
            system("pause");
            system("cls");
            cout<<"1. Which mob drops a Nether Star?"<<endl;
            
            cout<<"A) GHAST"<<endl;
            cout<<"B) WITHER"<<endl;
            cout<<"C) WITHER SKELETON"<<endl;
            cout<<"D) BLAZE"<<endl;
            cin>>a;
            if(a=='B' || a=='b')
            {
                SetConsoleTextAttribute(h,2);
                cout<<"CORRECT ANSWER!!";
                SetConsoleTextAttribute(h,7);
                cout<<"Next question is in"<<endl;
                for(i=3;i>0;i--)
                {
                    cout<<i<<"...";
                    Sleep(1000);
                }
                system("cls");
                score++;
            }
            else
            {
                SetConsoleTextAttribute(h,4);
                cout<<"WRONG ANSWER!!";
                SetConsoleTextAttribute(h,7);
                cout<<" 'B' is the correct answer!"<<endl;
                for(i=3;i>0;i--)
                {
                    cout<<i<<"...";
                    Sleep(1000);
                }
                system("cls");
            }
            cout<<"2. What is the name of the flying bus in FORTNITE that players jump out of at the start of each match?"<<endl;
            
            cout<<"A) BATTLE BUS"<<endl;
            cout<<"B) AIRSHIP"<<endl;
            cout<<"C) AIRPLANE"<<endl;
            cout<<"D) TIRPITZ"<<endl;
            cin>>a;
            if(a=='A' || a=='a')
            {
                SetConsoleTextAttribute(h,2);
                cout<<"CORRECT ANSWER!!";
                SetConsoleTextAttribute(h,7);
                cout<<"Next question is in"<<endl;
                for(i=3;i>0;i--)
                {
                    cout<<i<<"...";
                    Sleep(1000);
                }
                system("cls");
                score++;
            }
            else
            {
                SetConsoleTextAttribute(h,4);
                cout<<"WRONG ANSWER!!";
                SetConsoleTextAttribute(h,7);
                cout<<" 'A' is the correct answer!"<<endl;
                for(i=3;i>0;i--)
                {
                    cout<<i<<"...";
                    Sleep(1000);
                }
                system("cls");
            }
            cout<<"3. What is the name of Mario's brother?"<<endl;
            
            cout<<"A) LUIGI"<<endl;
            cout<<"B) TOAD"<<endl;
            cout<<"C) WARIO"<<endl;
            cout<<"D) WALUIGI"<<endl;
            cin>>a;
            if(a=='A' || a=='a')
            {
                SetConsoleTextAttribute(h,2);
                cout<<"CORRECT ANSWER!!";
                SetConsoleTextAttribute(h,7);
                cout<<"Next question is in"<<endl;
                for(i=3;i>0;i--)
                {
                    cout<<i<<"...";
                    Sleep(1000);
                }
                system("cls");
                score++;
            }
            else
            {
                SetConsoleTextAttribute(h,4);
                cout<<"WRONG ANSWER!!";
                SetConsoleTextAttribute(h,7);
                cout<<" 'A' is the correct answer!"<<endl;
                for(i=3;i>0;i--)
                {
                    cout<<i<<"...";
                    Sleep(1000);
                }
                system("cls");
            }
            cout<<"4. How many hearts does a player have by default in MINECRAFT?"<<endl;
         
            cout<<"A) 20"<<endl;
            cout<<"B) 10"<<endl;
            cout<<"C) 15"<<endl;
            cout<<"D) 5"<<endl;
            cin>>a;
            if(a=='B' || a=='b')
            {
                SetConsoleTextAttribute(h,2);
                cout<<"CORRECT ANSWER!!";
                SetConsoleTextAttribute(h,7);
                cout<<"Next question is in"<<endl;
                for(i=3;i>0;i--)
                {
                    cout<<i<<"...";
                    Sleep(1000);
                }
                system("cls");
                score++;
            }
            else
            {
                SetConsoleTextAttribute(h,4);
                cout<<"WRONG ANSWER!!";
                SetConsoleTextAttribute(h,7);
                cout<<" 'B' is the correct answer!"<<endl;
                for(i=3;i>0;i--)
                {
                    cout<<i<<"...";
                    Sleep(1000);
                }
                system("cls");
            }
            cout<<"5. What enchantment lets you mine blocks faster?"<<endl;
         
            cout<<"A) MENDING"<<endl;
            cout<<"B) FORTUNE"<<endl;
            cout<<"C) SILK TOUCH"<<endl;
            cout<<"D) EFFICIENCY"<<endl;
            cin>>a;
            if(a=='D' || a=='d')
            {
                SetConsoleTextAttribute(h,2);
                cout<<"CORRECT ANSWER!!";
                SetConsoleTextAttribute(h,7);
                cout<<"Next question is in"<<endl;
                for(i=3;i>0;i--)
                {
                    cout<<i<<"...";
                    Sleep(1000);
                }
                system("cls");
                score++;
            }
            else
            {
                SetConsoleTextAttribute(h,4);
                cout<<"WRONG ANSWER!!";
                SetConsoleTextAttribute(h,7);
                cout<<" 'D' is the correct answer!"<<endl;
                for(i=3;i>0;i--)
                {
                    cout<<i<<"...";
                    Sleep(1000);
                }
                system("cls");
            }
            cout<<"Your score is: "<<score<<endl;
            system("pause");
            system("cls");
            options();
            ofstream file("score.txt" , ios::in | ios::out | ios::app);
            file<<"EASY        GAMES        "<<score <<endl;
            file.close();
}
void mixEASY(){
    int score=0,i;
    char a;
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
            cout<<"You choose MIX. The quiz begins NOW."<<endl;
            system("pause");
            system("cls");
            cout<<"1. What is the group of lions named?"<<endl;
 
            cout<<"A) PACK"<<endl;
            cout<<"B) PLEDGE"<<endl;
            cout<<"C) PRIDE"<<endl;
            cout<<"D) HERD"<<endl;
            cin>>a;
            if(a=='C' || a=='c')
            {
                SetConsoleTextAttribute(h,2);
                cout<<"CORRECT ANSWER!!";
                SetConsoleTextAttribute(h,7);
                cout<<"Next question is in"<<endl;
                for(i=3;i>0;i--)
                {
                    cout<<i<<"...";
                    Sleep(1000);
                }
                system("cls");
                score++;
            }
            else
            {
                SetConsoleTextAttribute(h,4);
                cout<<"WRONG ANSWER!!";
                SetConsoleTextAttribute(h,7);
                cout<<" 'C' is the correct answer!"<<endl;
                for(i=3;i>0;i--)
                {
                    cout<<i<<"...";
                    Sleep(1000);
                }
                system("cls");
            }
            cout<<"2. What is the only fruit with seeds on the outside?"<<endl;
    
            cout<<"A) STRAWBERRY"<<endl;
            cout<<"B) PINEAPPLE"<<endl;
            cout<<"C) WATERMELON"<<endl;
            cout<<"D) KIWIFRUIT"<<endl;
            cin>>a;
            if(a=='A' || a=='a')
            {
                SetConsoleTextAttribute(h,2);
                cout<<"CORRECT ANSWER!!";
                SetConsoleTextAttribute(h,7);
                cout<<"Next question is in"<<endl;
                for(i=3;i>0;i--)
                {
                    cout<<i<<"...";
                    Sleep(1000);
                }
                system("cls");
                score++;
            }
            else
            {
                SetConsoleTextAttribute(h,4);
                cout<<"WRONG ANSWER!!";
                SetConsoleTextAttribute(h,7);
                cout<<" 'A' is the correct answer!"<<endl;
                for(i=3;i>0;i--)
                {
                    cout<<i<<"...";
                    Sleep(1000);
                }
                system("cls");
            }
            cout<<"3. Where were French fries first invented?"<<endl;
   
            cout<<"A) FRANCE"<<endl;
            cout<<"B) BELGIUM"<<endl;
            cout<<"C) ROME"<<endl;
            cout<<"D) USA"<<endl;
            cin>>a;
            if(a=='B' || a=='b')
            {
                SetConsoleTextAttribute(h,2);
                cout<<"CORRECT ANSWER!!";
                SetConsoleTextAttribute(h,7);
                cout<<"Next question is in"<<endl;
                for(i=3;i>0;i--)
                {
                    cout<<i<<"...";
                    Sleep(1000);
                }
                system("cls");
                score++;
            }
            else
            {
                SetConsoleTextAttribute(h,4);
                cout<<"WRONG ANSWER!!";
                SetConsoleTextAttribute(h,7);
                cout<<" 'B' is the correct answer!"<<endl;
                for(i=3;i>0;i--)
                {
                    cout<<i<<"...";
                    Sleep(1000);
                }
                system("cls");
            }
            cout<<"4. Which is the only mammal that can fly?"<<endl;
     
            cout<<"A) FLYING SQUIRRELS"<<endl;
            cout<<"B) FLYING DINOSAURS"<<endl;
            cout<<"C) CROW"<<endl;
            cout<<"D) BATS"<<endl;
            cin>>a;
            if(a=='D' || a=='d')
            {
                SetConsoleTextAttribute(h,2);
                cout<<"CORRECT ANSWER!!";
                SetConsoleTextAttribute(h,7);
                cout<<"Next question is in"<<endl;
                for(i=3;i>0;i--)
                {
                    cout<<i<<"...";
                    Sleep(1000);
                }
                system("cls");
                score++;
            }
            else
            {
                SetConsoleTextAttribute(h,4);
                cout<<"WRONG ANSWER!!";
                SetConsoleTextAttribute(h,7);
                cout<<" 'D' is the correct answer!"<<endl;
                for(i=3;i>0;i--)
                {
                    cout<<i<<"...";
                    Sleep(1000);
                }
                system("cls");
            }
            cout<<"5. In Indian cooking, what ingredient is called “jaggery”?"<<endl;
          
            cout<<"A) SALT"<<endl;
            cout<<"B) TURMERIC"<<endl;
            cout<<"C) SUGAR"<<endl;
            cout<<"D) GINGER"<<endl;
            cin>>a;
            if(a=='C' || a=='c')
            {
                SetConsoleTextAttribute(h,2);
                cout<<"CORRECT ANSWER!!";
                SetConsoleTextAttribute(h,7);
                cout<<"Next question is in"<<endl;
                for(i=3;i>0;i--)
                {
                    cout<<i<<"...";
                    Sleep(1000);
                }
                system("cls");
                score++;
            }
            else
            {
                SetConsoleTextAttribute(h,4);
                cout<<"WRONG ANSWER!!";
                SetConsoleTextAttribute(h,7);
                cout<<" 'C' is the correct answer!"<<endl;
                for(i=3;i>0;i--)
                {
                    cout<<i<<"...";
                    Sleep(1000);
                }
                system("cls");
            }
            cout<<"Your score is: "<<score<<endl;
            system("pause");
            system("cls");
            options();
            ofstream file("score.txt" , ios::in | ios::out | ios::app);
            cout<<endl;
            file<<"EASY        MIX        "<<score <<endl;
            cout<<endl;
            file.close();
}