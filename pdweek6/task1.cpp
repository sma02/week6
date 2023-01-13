#include <iostream>
using namespace std;

string activity(string temperature,string humidity);
int main()
{
string temperature,humidity;
cout<<"Enter if temperature warm or cold: ";
cin>>temperature;
cout<<"Enter if its   dry or humid: ";
cin>>humidity;
cout<<activity(temperature,humidity)<<endl;
}
string activity(string temperature,string humidity)
{
if(temperature=="warm" && humidity=="dry")
{
return "Play tennis";
}
else if(temperature=="warm" && humidity=="humid")
{
return "swim";
}
else if(temperature=="cold" && humidity=="dry")
{
return "Play basketball";
}
else if(temperature=="cold" && humidity=="humid")
{
return "Watch TV";
}
else
{
    return "";
}
}