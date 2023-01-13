#include <iostream>
using namespace std;

string checkTitle(int age,char gender);

int main()
{
int age;
char gender;
cout<<"Enter your age: ";
cin>>age;
cout<<"Enter your gender: ";
cin>>gender;
cout<<"Hi!"<<checkTitle(age,gender)<<endl;
}

string checkTitle(int age,char gender)
{
    if(gender=='m'&&age>=16)
    {
        return "Mr.";
    }
    if(gender=='f'&&age>=16)
    {
        return "Ms.";
    }
    if(gender=='m'&&age<16)
    {
        return "Master";
    }
    if(gender=='f'&&age<16)
    {
        return "Miss";
    }
}