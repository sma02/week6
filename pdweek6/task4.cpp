#include <iostream>
using namespace std;

float calcResidential(int mins);
float calcPremium(int mins,char dayNight);

int main()
{
    char customerType,dayNight;
    int mins;
    float price;
    cout<<"Enter which type of customer you are(Residential or Premium) select r/p: ";
    cin>>customerType;
    cout<<"Enter the number of mins you used the service:  ";
    cin>>mins;
    if(customerType=='p'||customerType=='P')
    {
        cout<<"Press D for Day time and N for Night time: ";
        cin>>dayNight;
        if(dayNight=='n'||dayNight=='N')
        {   
            price=calcPremium(mins,dayNight);
        }
        else
        {
            cout<<"Error"<<endl;
            return 0; 
        }
    }
    else if(customerType=='r'||customerType=='R')
    {
        price=calcResidential(mins);
    }
    else{
        cout<<"Error"<<endl;
        return 0;
    }
    cout<<"The charges are: "<<price<<" $"<<endl;
}

float calcResidential(int mins)
{
    float price=10.00;
    if(mins>50)
    {
        price=price+(mins-50)*0.20;
    }
    return price;
}
float calcPremium(int mins,char dayNight)
{
    float price=25.00;
if((dayNight=='d'||dayNight=='D')&&mins>75)
{
 price=price+(mins-75)*0.10;
}
else if((dayNight=='n'||dayNight=='N')&&mins>100)
{
 price=price+(mins-100)*0.05;
}
return price;
}