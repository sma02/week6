#include <iostream>
#include <windows.h>
using namespace std;

void printMaze();
void gotoxy(int x, int y);
void erase(int x, int y);
void printPacman(int x, int y);
void printGhost(int x, int y);
char getCharAtxy(short int x, short int y);

int main()
{
    int gx1 = 1;
    int gy1 = 1;
    int gx2 = 3;
    int gy2 = 8;
    string direction1 = "right";
    char previousChar1 = ' ';
    string direction2 = "down";
    char previousChar2 = ' ';
    system("cls");
    printMaze();
    printGhost(gx1, gy1);
    printGhost(gx2, gy2);
    while (true)
    {
        Sleep(100);
        
          if (direction1 == "right")
          {
              char nextLocation = getCharAtxy(gx1 + 1, gy1);
              if (nextLocation == '%')
              {
                  direction1 = "left";
              }
              else if (nextLocation == ' ' || nextLocation == '.')
              {
                  erase(gx1, gy1);
                  gx1 = gx1 + 1;
                  previousChar1 = nextLocation;
                  printGhost(gx1, gy1);
              }
          }
          if (direction1 == "left")
          {
              char nextLocation = getCharAtxy(gx1 - 1, gy1);
              if (nextLocation == '%')
              {
                  direction1 = "right";
              }
              else if (nextLocation == ' ' || nextLocation == '.')
              {
                  erase(gx1, gy1);
                  gx1 = gx1 - 1;
                  previousChar1 = nextLocation;
                  printGhost(gx1, gy1);
              }
          }
        if (direction2 == "up")
        {
            char nextLocation = getCharAtxy(gx2, gy2 - 1);
            if (nextLocation == '%')
            {
                direction2 = "down";
            }
            else if (nextLocation == ' ' || nextLocation == '.')
            {
                erase(gx2, gy2);
                gy2 = gy2 - 1;
                previousChar2 = nextLocation;
                printGhost(gx2, gy2);
            }
        }
        if (direction2 == "down")
        {
            char nextLocation = getCharAtxy(gx2, gy2 + 1);
            if (nextLocation == '%')
            {
                direction2 = "up";
            }
            else if (nextLocation == ' ' || nextLocation == '.')
            {
                erase(gx2, gy2);
                gy2 = gy2 + 1;
                previousChar1 = nextLocation;
                printGhost(gx2, gy2);
            }
        }
    }
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}
void erase(int x, int y)
{
    gotoxy(x, y);
    cout << " ";
}
void printPacman(int x, int y)
{
    gotoxy(x, y);
    cout << "P";
}
void printGhost(int x, int y)
{
    gotoxy(x, y);
    cout << "G";
}
void printMaze()
{
    cout << "%%%%%%%%%%%%" << endl;
    cout << "%          %" << endl;
    cout << "% .     .  %" << endl;
    cout << "%          %" << endl;
    cout << "%          %" << endl;
    cout << "%          %" << endl;
    cout << "%          %" << endl;
    cout << "%          %" << endl;
    cout << "%          %" << endl;
    cout << "%          %" << endl;
    cout << "%          %" << endl;
    cout << "%          %" << endl;
    cout << "%          %" << endl;
    cout << "%%%%%%%%%%%%" << endl;
}