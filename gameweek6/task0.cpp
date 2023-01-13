#include <iostream>
#include <windows.h>
using namespace std;

void printMaze();
void gotoxy(int x, int y);
void erase(int x, int y);
void printPacman(int x, int y);
void printGhost(int x, int y);
char getCharAtxy(short int x,short int y);

int  main()
{
 int gx =1;
 int gy=1;
 string direction="right";
 char previousChar=' ';
 system("cls");
 printMaze();
 printGhost(gx,gy);
 while(true)
 {
    Sleep(50);
    if(direction=="right")
    {
        char nextLocation=getCharAtxy(gx+1,gy);
        if(nextLocation=='%')
        {
            direction="left";
        }
        else if(nextLocation==' '||nextLocation=='.')
        {
            erase(gx,gy);
            gx=gx+1;
            previousChar=nextLocation;
            printGhost(gx,gy);
        }
    }
if(direction=="left")
    {
        char nextLocation=getCharAtxy(gx-1,gy);
        if(nextLocation=='%')
        {
            direction="right";
        }
        else if(nextLocation==' '||nextLocation=='.')
        {
            erase(gx,gy);
            gx=gx-1;
            previousChar=nextLocation;
            printGhost(gx,gy);
        }
    }
 }   
}

void gotoxy(int x, int y)
{
    COORD  coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
char getCharAtxy(short int x,short int y)
{
    CHAR_INFO ci;
    COORD xy = {0,0};
    SMALL_RECT rect  ={x,y,x,y};
    COORD coordBufSize;
    coordBufSize.X=1;
    coordBufSize.Y=1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE),&ci,coordBufSize,xy,&rect)? ci.Char.AsciiChar:' ';
}
void erase(int x,int y)
{
    gotoxy(x,y);
    cout<<" ";
}
void printPacman(int x,int y)
{
    gotoxy(x,y);
    cout<<"P";
}
void printGhost(int x,int y)
{
    gotoxy(x,y);
    cout<<"G";
}
void printMaze()
{
cout<<"%%%%%%%%%%%%"<<endl;
cout<<"%          %"<<endl;
cout<<"%          %"<<endl;
cout<<"%          %"<<endl;
cout<<"%          %"<<endl;
cout<<"%          %"<<endl;
cout<<"%          %"<<endl;
cout<<"%          %"<<endl;
cout<<"%          %"<<endl;
cout<<"%          %"<<endl;
cout<<"%          %"<<endl;
cout<<"%          %"<<endl;
cout<<"%          %"<<endl;
cout<<"%%%%%%%%%%%%"<<endl;
}