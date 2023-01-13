#include <iostream>
using namespace std;

float costPayable(string fruit,string day,float quantity);

int main()
{
    string fruit,day;
    float quantity;
    cout<<"Enter fruit name: ";
    cin>>fruit;
    if(!(fruit=="banana"||fruit=="apple"||fruit=="orange"||fruit=="grapefruit"||fruit=="kiwi"||fruit=="pineapple"||fruit=="grapes"))
    {
        cout<<"Error"<<endl;
        return 0;        
    }
    cout<<"Enter day of week: ";
    cin>>day;
    if(!(day=="Monday"||day=="Tuesday"||day=="Wednesday"||day=="Thursday"||day=="Friday"||day=="Saturday"||day=="Sunday"))
    {
        cout<<"Error"<<endl;
        return 0;
    }
    cout<<"Enter quantity: ";
    cin>>quantity;
    cout<<"Total payable: "<<costPayable(fruit,day,quantity)<<endl;
}
float costPayable(string fruit,string day,float quantity)
{
    float cost=0;
   if(day=="Monday"||day=="Tuesday"||day=="Wednesday"||day=="Thursday"||day=="Friday")
   {
    if(fruit=="banana")
    {
        cost=quantity*2.50;
    }
    else if(fruit=="apple")
    {
        cost=quantity*1.20;
    }
    else if(fruit=="orange")
    {
        cost=quantity*0.85;
    }
    else if(fruit=="grapefruit")
    {
        cost=quantity*1.45;
    }
    else if(fruit=="kiwi")
    {
        cost=quantity*2.70;
    }
    else if(fruit=="pineapple")
    {
        cost=quantity*5.50;
    }
    else if(fruit=="grapes")
    {
        cost=quantity*3.85;
    }
   }
   else
   {
     if(fruit=="banana")
    {
        cost=quantity*2.70;
    }
    else if(fruit=="apple")
    {
        cost=quantity*1.25;
    }
    else if(fruit=="orange")
    {
        cost=quantity*0.90;
    }
    else if(fruit=="grapefruit")
    {
        cost=quantity*1.60;
    }
    else if(fruit=="kiwi")
    {
        cost=quantity*3.00;
    }
    else if(fruit=="pineapple")
    {
        cost=quantity*5.60;
    }
    else if(fruit=="grapes")
    {
        cost=quantity*4.20;
    }   
   }
   return cost;
}