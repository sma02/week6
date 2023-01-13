#include <iostream>
using namespace std;

string calcZodiacSign(int day,string month);

int main()
{
int day;
string month;
cout<<"Enter day: ";
cin>>day;
cout<<"Enter month: ";
cin>>month;
cout<<calcZodiacSign(day,month);
}
string calcZodiacSign(int day,string month)
{
    string ZodiacSign;
    if((month=="March"&&day>=21&&day<=31)||(month=="April"&&day>=1&&day<=19))
    {
    ZodiacSign="Aeries";
    }
    else if((month=="April"&&day>=20&&day<=30)||(month=="May"&&day>=1&&day<=20))
    {
    ZodiacSign="Taurus";
    }
    else if((month=="May"&&day>=21&&day<=31)||(month=="June"&&day>=1&&day<=20))
    {
    ZodiacSign="Gemini";
    }
    else if((month=="June"&&day>=21&&day<=30)||(month=="July"&&day>=1&&day<=22))
    {
    ZodiacSign="Cancer";
    }
    else if((month=="July"&&day>=23&&day<=31)||(month=="August"&&day>=1&&day<=22))
    {
    ZodiacSign="Leo";
    }
    else if((month=="August"&&day>=23&&day<=31)||(month=="September"&&day>=1&&day<=22))
    {
    ZodiacSign="Virgo";
    }
    else if((month=="September"&&day>=23&&day<=30)||(month=="October"&&day>=1&&day<=22))
    {
    ZodiacSign="Libra";
    }
    else if((month=="October"&&day>=23&&day<=31)||(month=="November"&&day>=1&&day<=21))
    {
    ZodiacSign="Scorpio";
    }
    else if((month=="November"&&day>=22&&day<=31)||(month=="December"&&day>=1&&day<=21))
    {
    ZodiacSign="Sagittarius";
    }
    else if((month=="December"&&day>=22&&day<=31)||(month=="January"&&day>=1&&day<=19))
    {
    ZodiacSign="Capricon";
    }
    else if((month=="January"&&day>=20&&day<=31)||(month=="Febuary"&&day>=1&&day<=18))
    {
    ZodiacSign="Aquarius";
    }
    else if((month=="Febuary"&&day>=19&&day<=28)||(month=="March"&&day>=1&&day<=20))
    {
    ZodiacSign="Pisces";
    }
    return ZodiacSign;
}