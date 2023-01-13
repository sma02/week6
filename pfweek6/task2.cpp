#include <iostream>
#include <windows.h>
using namespace std;
float discount(string day,string month,float amount);
int main()
{
cout<<discount("sunday","october",1000);
}
float discount(string day,string month,float amount)
{
    if(day=="sunday" && (month=="october"||month=="march"||month=="august"))
    {
        return amount - (amount*10)/100;
    }
    else if(day=="monday"&&(month=="november"||month=="december"))
    {
        return amount - (amount*5)/100;
    }
    else
    {
        return amount;
    }
}
