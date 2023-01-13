#include <iostream>
using namespace std;

float priceForStudio(string month,int stays);
float priceForApartment(string month,int stays);

int main()
{
string month;
int stays;
float priceApartment,priceStudio;
cout<<"Enter month: ";
cin>>month;
cout<<"Enter number  of  stays: ";
cin>>stays;
priceApartment=priceForApartment(month,stays);
priceStudio=priceForStudio(month,stays);
cout<<"Apartment: "<<priceApartment<<"$"<<endl;
cout<<"Studio :"<<priceStudio<<"$"<<endl;
}
float priceForStudio(string month,int stays)
{
    float price;
    float discountFactor=0;
    float  rate;
if(month=="May"||month=="October")
{
if(stays>14)
{
    discountFactor=30;
}
else if(stays>7)
{
 discountFactor=5;   
}
rate=50;
}
else if(month=="June"||month=="September")
{
 if(stays>14)
{
    discountFactor=20;
}   
rate=75.20;
}
else if(month=="July"||month=="August")
{
rate=76;
}
price=stays*rate;
price=price-(price*discountFactor)/100;
return price;
}
float priceForApartment(string month,int stays)
{
   float price;
    float discountFactor=0;
    float  rate;
    if(stays>14)
    {
        discountFactor=10;
    }
if(month=="May"||month=="October")
{
    rate=65;
}
else if(month=="June"||month=="September")
{
    rate=68.70;
}
else if(month=="July"||month=="August")
{
    rate=77;
}
price=stays*rate;
price=price-(price*discountFactor)/100;
return price;
}