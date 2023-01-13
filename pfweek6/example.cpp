#include <iostream>
using namespace std;
int isGreatest(int number1,int number2,int number3);
int main()
{
int num1,num2,num3;
cout<<"Enter 1st number: ";
cin>>num1;
cout<<"Enter 2nd number: ";
cin>>num2;
cout<<"Enter 3rd number: ";
cin>>num3;
cout<<"The greatest of three numbers is: "<<isGreatest(num1,num2,num3);
}
int isGreatest(int number1,int number2,int number3)
{
    int greatest;
    if(number1>number2 && number1>number3)
    {
        greatest=number1;
    }
    else if(number2>number1 && number2>number3)
    {
        greatest=number2;
    }
    else if(number3>number2 && number3>number1)
    {
        greatest=number3;
    }
    else 
    {
        greatest=number1;
    }
    return greatest;
}