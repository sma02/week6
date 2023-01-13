#include <iostream>
#include <cmath>
using  namespace std;

double  calculateBudget(double,string,int);

int main()
{
    float budget;
    string category;
    int personsInGroup;
    float result;
    cout<<"Enter your budget in QR: ";
    cin>>budget;
    cout<<"Enter the category you are interested  in: ";
    cin>>category;
    cout<<"Enter your the number of persons in the  group : ";
    cin>>personsInGroup;
   result=calculateBudget(budget,category,personsInGroup);
   if(result>=0)
   {
    cout<<"Yes! You have "<<result<<" QR left"<<endl;
   }
   else
   {
    result=result*-1;
    cout<<"Not enough money!You need "<<result<<" QR"<<endl;
   }
}
double calculateBudget(double budget,string category,int personsInGroup)
{
    double amountLeft,netTicketPrice,result;
if(personsInGroup>=1 && personsInGroup<=4)
{
    amountLeft=budget-(budget*75)/100;
}
else if(personsInGroup>=5 && personsInGroup<=9)
{
    amountLeft=budget-(budget*60)/100;
}
else if(personsInGroup>=10 && personsInGroup<=24)
{
    amountLeft=budget-(budget*50)/100;
}
else if(personsInGroup>=25&&personsInGroup<=49)
{
    amountLeft=budget-(budget*40)/100;
}
else if(personsInGroup>=50)
{
amountLeft=budget-(budget*25)/100;
}
if(category=="normal")
{
netTicketPrice=249.99*personsInGroup;
}
else if(category=="VIP")
{
    netTicketPrice=499.99*personsInGroup;
}
result = amountLeft-netTicketPrice;
return result;
}