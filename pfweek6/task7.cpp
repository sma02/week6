#include <iostream>
using  namespace std;

float checkCost(string,string,int);

int main()
{
    //Test cases
cout<<checkCost("coffee","Varna",2)<<endl;
cout<<checkCost("peanuts","Plovdiv",1)<<endl;
cout<<checkCost("beer","Sofia",6)<<endl;
cout<<checkCost("water","Plovdiv",3000)<<endl;
}
float checkCost(string product,string city,int quantity)
{
    float price=0;
    if(product=="coffee")
    {
        if(city=="Sofia")
        {
            price=quantity*0.50;
        }
        else if(city=="Plovdiv")
        {
            price=quantity*0.40;
        }
        else if(city=="Varna")
        {
            price=quantity*0.45;
        }
    }
    else if(product=="water")
    {
        if(city=="Sofia")
        {
            price=quantity*0.80;
        }
        else if(city=="Plovdiv")
        {
            price=quantity*0.70;
        }
        else if(city=="Varna")
        {
            price=quantity*0.80;
        }
    }
    else if(product=="beer")
    {
        if(city=="Sofia")
        {
            price=quantity*1.20;
        }
        else if(city=="Plovdiv")
        {
            price=quantity*1.15;
        }
        else if(city=="Varna")
        {
            price=quantity*1.10;
        }
    }
    else if(product=="sweets")
    {
        if(city=="Sofia")
        {
            price=quantity*1.45;
        }
        else if(city=="Plovdiv")
        {
            price=quantity*1.30;
        }
        else if(city=="Varna")
        {
            price=quantity*1.35;
        }
    }
    else if(product=="peanuts")
    {
        if(city=="Sofia")
        {
            price=quantity*1.60;
        }
        else if(city=="Plovdiv")
        {
            price=quantity*1.50;
        }
        else if(city=="Varna")
        {
            price=quantity*1.55;
        }
    }
    return price;
}