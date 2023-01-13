#include   <iostream>
using namespace std;

float totalIncome(string,int,int);

int main()
{
    int rows,columns;
    string type;
    cout<<"Enter type of screening: ";
    cin>>type;
    cout<<"Enter number of rows: ";
    cin>>rows;
    cout<<"Enter number of columns: ";
    cin>>columns;
    cout<<"Total income: "<<totalIncome(type,rows,columns)<<endl;
}
float totalIncome(string type,int rows,int columns)
{
    float ticketPrice=0;
    if(type=="premiere")
    {
        ticketPrice=12.00;
    }
    else if(type=="normal")
    {
        ticketPrice=7.50;
    }
    else if(type=="discount")
    {
        ticketPrice=5.00;
    }
    return rows*columns*ticketPrice;
}