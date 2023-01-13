#include <iostream>
using namespace std;

string pointStatusOnFigure(int h, int x, int y);

int main()
{
    int h,x,y;
    cout<<"Enter h: ";
    cin>>h;
    cout<<"Enter x: ";
    cin>>x;
    cout<<"Enter y: ";
    cin>>y;
    cout<<pointStatusOnFigure(h,x,y);
}
string pointStatusOnFigure(int h, int x, int y)
{
    int boundriesX1=0;
    int boundriesY1=0;
    int boundriesX2=3*h;
    int boundriesY2=h;
    int boundriesX3=h;
    int boundriesY3=h;
    int boundriesX4=h+h;
    int boundriesY4=h+h*3;
    if((x>boundriesX1&&y>boundriesY1)&&(x<boundriesX2&&y<boundriesY2)||(x>boundriesX3&&y>boundriesY3)&&(x<boundriesX4&&y<boundriesY4))
    {
        return "inside";
    }
    else if(((x==boundriesX1||x==boundriesX2)&&y<=boundriesY2&&y>=boundriesY1)||((y==boundriesY1||y==boundriesY2)&&x<=boundriesX2&&x>=boundriesX1)||((x==boundriesX3||x==boundriesX4)&&y<=boundriesY3&&y>=boundriesY4)||((y==boundriesY3||y==boundriesY4)&&x<=boundriesX3&&x>=boundriesX4))
    {
        return "border";
    }
    else
    {
        return "outside";
    }
}