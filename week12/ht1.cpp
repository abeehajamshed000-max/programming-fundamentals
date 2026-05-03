#include<iostream>
#include<windows.h>
using namespace std;
void printMazee()
{
    cout<<"############################################"<<endl;
    cout<<"#                                          #"<<endl;
    cout<<"#                                          #"<<endl;
    cout<<"#                                          #"<<endl;
    cout<<"#                                          #"<<endl;
    cout<<"#                                          #"<<endl;
    cout<<"#                                          #"<<endl;
    cout<<"#                                          #"<<endl;
    cout<<"#                                          #"<<endl;
    cout<<"#                                          #"<<endl;
    cout<<"#                                          #"<<endl;
    cout<<"#                                          #"<<endl;
    cout<<"#                                          #"<<endl;
    cout<<"#                                          #"<<endl;
    cout<<"#                                          #"<<endl;
    cout<<"############################################"<<endl;
}
//player character
char box = 219;
char tank1[6] ={box,box,box,'-','-','>'};
char tank2[6] ={'0',' ','0',' ',' ',' '};

//Enemy character
char enemy1[6] = {' ',' ',' ','-','-','-'};
char enemy2[6] = {'<','=','=','(','-',')'};
char enemy3[6] = {' ',' ',' ','\\','@','/'};
char enemy4[6] = {' ', ' ',' ','*','*','*'};

//player  coordinates
int tankX =5;
int tankY =5;

//enemy coordinates
int enemyX =30;
int enemyY =10;


void printTank()
{


    gotoxy(tankX,tankY);
    
    for(int index=0; index<6; index++)
    {
        cout<<tank1[index];
    }
    gotoxy(tankX,tankY+1);
    for(int index =0; index <6; index++){
        cout<<tank2[index];
    }
}
void printEnemy()
{
    gotoxy(enemyX,enemyY);
    for(int index=0; index<6; index++)
    {
        cout<<tank2[index];
    }
}
void printEnemy()
