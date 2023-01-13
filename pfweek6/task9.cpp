#include <iostream>
#include <cmath>
using namespace std;

int calculateDays(string isLeap, int p,int h);

int main()
{
    string isLeap;
    int p,h;
    cout<<"Enter leap or normal: ";
    cin>>isLeap;
    cout<<"Enter number of holidays: ";
    cin>>p;
    cout<<"Enter count of weekends in which you travel to hometown: ";
    cin>>h;
    cout<<"You the number of times you played vollyball: "<<calculateDays(isLeap,p,h);
}
int calculateDays(string isLeap, int p,int h)
{
    float result;
    result = p*2/3+h+(48-h)*3/4;
    if(isLeap=="leap")
    {
    result=result+(result*15)/100;
    }
    return round(result);
}