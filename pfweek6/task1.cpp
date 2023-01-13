#include <iostream>
using namespace  std;
char calculateGrade(int marks);
int main()
{
    int marks;
    cout<<"Enter your marks: ";
    cin>>marks;
    cout<<"Your grade is: "<<calculateGrade(marks)<<endl;
}
char calculateGrade(int marks)
{
    char  result;
    if(marks<50)
    {
        result = 'F';
    }
   else if(marks>=50 && marks<=60)
    {
        result = 'E';
    }
    else if(marks>=61 && marks<=70)
    {
        result = 'D';
    }
    else if(marks>=71 && marks<=80)
    {
        result = 'C';
    }
    else if(marks>=81 && marks<=85)
    {
        result = 'B';
    }
    else if(marks>85)
    {
        result = 'A';
    }
    else
    {
        result = ' ';
    }
    return result;
}