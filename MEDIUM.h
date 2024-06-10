#include<iostream>
#include<cstdlib>
#include<windows.h>
using namespace std;
void options();
void animeMEDIUM(){
    int score=0,i;
    char a;
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);      
            cout<<"You choose ANIME. The quiz begins NOW."<<endl;
            system("pause");
            system("cls");
            cout<<"1. Which path leads to kig kai's house(DRAGON BALL)"<<endl;
     
            cout<<"A) TIGER WAY"<<endl;
            cout<<"B) SNAKE WAY"<<endl;
            cout<<"C) DRAGON PATH"<<endl;
            cout<<"D) TIGER PATH"<<endl;
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
            cout<<"2. What was the name of first ever episode of Naruto?"<<endl;
     
            cout<<"A) NARUTO UZUMAKI:THE TESTS OF A NINJA"<<endl;
            cout<<"B) THE TESTS OF A NINJA"<<endl;
            cout<<"C) UZUMAKI NARUTO"<<endl;
            cout<<"D) NARUTO"<<endl;
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
            cout<<"3. Who was the first person to wear the straw hat in One Piece?"<<endl;
        
            cout<<"A) NAMI"<<endl;
            cout<<"B) LUFFY"<<endl;
            cout<<"C) GOL D.ROGER"<<endl;
            cout<<"D) USOPP"<<endl;
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
            cout<<"4. The color of Nezuko's eyes is"<<endl;
           
            cout<<"A) PINK"<<endl;
            cout<<"B) BLACK"<<endl;
            cout<<"C) RED"<<endl;
            cout<<"D) GREEN"<<endl;
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
            cout<<"5. What move does KING KAI teach GOKU?"<<endl;
       
            cout<<"A) DESTRUCTO DISC"<<endl;
            cout<<"B) KAIOKEN"<<endl;
            cout<<"C) TRIPLE BEAM CANNON"<<endl;
            cout<<"D) SPIRIT BOMB"<<endl;
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
            file<<"MEDIUM        ANIME        "<<score <<endl;
            cout<<endl;
            file.close();
}
void gamesMEDIUM(){
    int score=0,i;
    char a;      
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
            cout<<"You choose GAMES. The quiz begins NOW."<<endl;
            system("pause");
            system("cls");
            cout<<"1. MINECRAFT was created by?"<<endl;
       
            cout<<"A) MARCUS PEARSSON"<<endl;
            cout<<"B) LESLIE BENZIES"<<endl;
            cout<<"C) DAVID BASZUCKI"<<endl;
            cout<<"D) SARAH HEBBLER"<<endl;
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
            cout<<"2. What video game did Mario, the Nintendo character, first appear in?"<<endl;
         
            cout<<"A) MARIO'S BOMBS AWAY"<<endl;
            cout<<"B) MARIO BROS"<<endl;
            cout<<"C) DONKEY KONG"<<endl;
            cout<<"D) SUPER MARIO BROS"<<endl;
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
            cout<<"3. In what year did Sony announce they were developing a Playstation Portable?"<<endl;
     
            cout<<"A) 2004"<<endl;
            cout<<"B) 2001"<<endl;
            cout<<"C) 2007"<<endl;
            cout<<"D) 2003"<<endl;
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
            cout<<"4. In Grand Theft Auto, the video game, you are able to play up to 8 different characters. What do all the characters have in common?"<<endl;
 
            cout<<"A) SAME TIE"<<endl;
            cout<<"B) SAME NAME"<<endl;
            cout<<"C) SAME SWEATER"<<endl;
            cout<<"D) SAME VOICE"<<endl;
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
            cout<<"5. Who is the main character in the “Assassin's Creed” game series?"<<endl;
      
            cout<<"A) EZIO AUDITORE"<<endl;
            cout<<"B) NATHANE DRAKE"<<endl;
            cout<<"C) SAMUS ARAN"<<endl;
            cout<<"D) LANA CROFT"<<endl;
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
            file<<"MEDIUM        GAMES        "<<score <<endl;
            cout<<endl;
            file.close();
}
void mixMEDIUM(){
    int score=0,i;
    char a;      
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
            cout<<"You choose MIX. The quiz begins NOW."<<endl;
            system("pause");
            system("cls");
            cout<<"1. What animal is the symbol of W.W.F(WORLD WIDE FUND)"<<endl;
   
            cout<<"A) RED PANDA"<<endl;
            cout<<"B) GIANT PANDA"<<endl;
            cout<<"C) TIGER"<<endl;
            cout<<"D) KANGAROO"<<endl;
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
            cout<<"2. In terms of price per calorie, which of the following foods is the cheapest and most nutritious?"<<endl;
        
            cout<<"A) SLICE OF BREAD"<<endl;
            cout<<"B) APPLE"<<endl;
            cout<<"C) BROCCOLI"<<endl;
            cout<<"D) CHEESE BURGER"<<endl;
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
            cout<<"3. What is the major cause of diminishing wildlife number?"<<endl;
         
            cout<<"A) FELLING OF TREES"<<endl;
            cout<<"B) CANNIBALISM"<<endl;
            cout<<"C) HABITAT DESTRUCTION"<<endl;
            cout<<"D) PAUCITY OF DRINKING WATER"<<endl;
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
            cout<<"4. Which of these is a threatened species?"<<endl;
        
            cout<<"A) NICOBAR PIGEON"<<endl;
            cout<<"B) DESERT FOX"<<endl;
            cout<<"C) ASIAN BUFFALO"<<endl;
            cout<<"D) GANGETIC DOLPHIN"<<endl;
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
            cout<<"5. The milk,cheese and yogurt are important for?"<<endl;
         
            cout<<"A) STRONG BONES"<<endl;
            cout<<"B) TEETH"<<endl;
            cout<<"C) MUSCLES"<<endl;
            cout<<"D) ALL OF THE ABOVE"<<endl;
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
            file<<"MEDIUM        MIX        "<<score <<endl;
            cout<<endl;
            file.close();
}