#include <iostream>
using namespace std;
string checkSpeed(float speed);
int main()
{
float speed;
cout<<"Enter speed:  ";
cin>>speed;
cout<<"speed is "<<checkSpeed(speed)<<endl;
}
string checkSpeed(float speed)
{
    if(speed<=10)
    {
        return "slow";
    }
    else if(speed>10&&speed<=50)
    {
        return "average";
    }
    else  if(speed>50&&speed<=150)
    {
        return "fast";
    }
    else  if(speed>150&&speed<=1000)
    {
        return "ultra-fast";
    }
    else if(speed >1000)
    {
        return "extremely fast";
    }
}