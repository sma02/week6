#include <iostream>
using namespace std;
// 5 day 4.65
// 25 day 2.25
// 7  night 7
float lowestValue(int,string);
int main()
{
    int kilometers;
    string dayNight;
    cout<<"Enter number of kilometers: ";
    cin>>kilometers;
    cout<<"Enter day or night: ";
    cin>>dayNight;
    cout<<"lowest travel price is: "<<lowestValue(kilometers,dayNight)<<" EUR";
}
float lowestValue(int kilometers,string dayNight)
{
    float amount=0;
    if(kilometers<20)
    {
        amount=0.70;
        if(dayNight=="day")
        {
            amount=amount +(kilometers*0.79);
        }
        else if(dayNight=="night")
        {
            amount=amount +(kilometers*0.90);
        }
        else{
            amount=0;
        }
    }
    else if(kilometers>=20&&kilometers<100)
    {
        amount=amount +(kilometers*0.09);
    }
    else if(kilometers>=100)
    {
        amount=amount +(kilometers*0.06);
    }
    return amount;
}