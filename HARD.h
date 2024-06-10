#include<iostream>
#include<cstdlib>
#include<windows.h>
using namespace std;
void options();
void animeHARD(){
    int score=0,i;
    char a;
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
            cout<<"You choose ANIME. The quiz begins NOW."<<endl;
            system("pause");
            system("cls");
            cout<<"1. Who made the famous anime TOKYO REVENGERS?"<<endl;
       
            cout<<"A) EIICHIRO ODA"<<endl;
            cout<<"B) KOYOHARU GOTOUGE"<<endl;
            cout<<"C) KEN WAKUI"<<endl;
            cout<<"D) AKIRA TORIYAMA"<<endl;
            cin>>a;
            system("cls");
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
            cout<<"2. Who was sealed inside of the Z Sword?(DRAGON BALL)"<<endl;
      
            cout<<"A) ELDER KAI"<<endl;
            cout<<"B) GRAND SUPREME KAI"<<endl;
            cout<<"C) SUPREME KAI"<<endl;
            cout<<"D) GRAND KAI"<<endl;
            cin>>a;
            system("cls");
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
            cout<<"3. Who is the voice actor of MONKEY D LUFFY?"<<endl;
 
            cout<<"A) MASAKO NOZAWA"<<endl;
            cout<<"B) MAYUMI TANAKA "<<endl;
            cout<<"C) ERIC LEGRAND"<<endl;
            cout<<"D) SEAN SCHEMMEL"<<endl;
            cin>>a;
            system("cls");
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
            cout<<"4. Who was the first member of Levi's squad to be killed by Annie, the Female Titan?"<<endl;
       
            cout<<"A) ELD"<<endl;
            cout<<"B) ARMIN"<<endl;
            cout<<"C) JEAN"<<endl;
            cout<<"D) GUNTHER"<<endl;
            cin>>a;
            system("cls");
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
            cout<<"5. Which past character makes a return in arc following the universe 6 saga?"<<endl;
    
            cout<<"A) TRUNKS"<<endl;
            cout<<"B) BARDOCK"<<endl;
            cout<<"C) GOHAN"<<endl;
            cout<<"D) BROLY"<<endl;
            cin>>a;
            system("cls");
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
            cout<<"Your score is: "<<score<<endl;
            system("pause");
            system("cls");
            options();
            ofstream file("score.txt" , ios::in | ios::out | ios::app);
            file<<"HARD        ANIME        "<<score <<endl;
            cout<<endl;
            file.close();
}
void gamesHARD(){
    int score=0,i;
    char a;      
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
            cout<<"You choose GAMES. The quiz begins NOW."<<endl;
            system("pause");
            system("cls");
            cout<<"1. Which of these characters was NOT in the first Mortal Kombat game?"<<endl;

            cout<<"A) SONYA BLADE"<<endl;
            cout<<"B) LIU KANG"<<endl;
            cout<<"C) KUNG LAO"<<endl;
            cout<<"D) SCORPION"<<endl;
            cin>>a;
            system("cls");
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
            cout<<"2. Which company runs the digital game distribution platform Steam?"<<endl;
         
            cout<<"A) BLIZZARD"<<endl;
            cout<<"B) VALVE"<<endl;
            cout<<"C) SONY"<<endl;
            cout<<"D) ELECTRONIC ARTS"<<endl;
            cin>>a;
            system("cls");
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
            cout<<"3. Who is the main character in GTA 4?"<<endl;
       
            cout<<"A) CARL 'CJ' JOHNSON"<<endl;
            cout<<"B) NIKO BELLIC"<<endl;
            cout<<"C) MICHAEL DE SANTA"<<endl;
            cout<<"D) TOMMY VERCETTI"<<endl;
            cin>>a;
            system("cls");
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
            cout<<"4. What species is Sonic the Hedgehog's friend Knuckles?"<<endl;

            cout<<"A) PANGOLIN"<<endl;
            cout<<"B) ROBOT"<<endl;
            cout<<"C) TWO-TAILED FOX"<<endl;
            cout<<"D) ECHIDNA"<<endl;
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
            cout<<"5. What is the best-selling video game console of all time?"<<endl;
  
            cout<<"A) SONY'S PS2"<<endl;
            cout<<"B) NINTENDO WII"<<endl;
            cout<<"C) MICROSOFT XBOX 360"<<endl;
            cout<<"D) SONY'S PS4"<<endl;
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
            cout<<"Your score is: "<<score<<endl;
            system("pause");
            system("cls");
            options();
            ofstream file("score.txt" , ios::in | ios::out | ios::app);
            file<<"HARD        GAMES        "<<score <<endl;

            file.close();
}
void mixHARD(){
    int score=0,i;
    char a;      
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
            cout<<"You choose MIX. The quiz begins NOW."<<endl;
            system("pause");
            system("cls");
            cout<<"1. Which has the thickest fur of any mammal?"<<endl;
 
            cout<<"A) SEA OTTER"<<endl;
            cout<<"B) BEARS"<<endl;
            cout<<"C) RED FOX"<<endl;
            cout<<"D) SQUIRREL"<<endl;
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
            cout<<"2. Which one of the folllowing products was introduced in INDIA by SOUTH AMERICA?"<<endl;
   
            cout<<"A) FENUGREEK"<<endl;
            cout<<"B) CHILLI"<<endl;
            cout<<"C) COFFEE"<<endl;
            cout<<"D) MANGO"<<endl;
            cin>>a;
            system("cls");
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
            cout<<"3. What is the closest living relative to the T-rex?"<<endl;
    
            cout<<"A) CHICKENS"<<endl;
            cout<<"B) CROCODILES"<<endl;
            cout<<"C) FLAMINGOS"<<endl;
            cout<<"D) WHALES"<<endl;
            cin>>a;
            system("cls");
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
            cout<<"4. Which fruit resembles '60%' of human DNA?"<<endl;
         
            cout<<"A) PINEAPPLE"<<endl;
            cout<<"B) STRABERRY"<<endl;
            cout<<"C) BANANA"<<endl;
            cout<<"D) APPLE"<<endl;
            cin>>a;
            system("cls");
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
            cout<<"5. Which food contains the most calories per gram?"<<endl;
            
            cout<<"A) PISTACHIO"<<endl;
            cout<<"B) CHIA SEEDS"<<endl;
            cout<<"C) CHOCOLATE"<<endl;
            cout<<"D) AVOCADO"<<endl;
            cin>>a;
            system("cls");
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
            file<<"HARD        MIX        "<<score<<endl;
            cout<<endl;
            file.close();
}