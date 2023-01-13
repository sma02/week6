#include <iostream>
using namespace std;

float calcTotal(float subject1,float subject2,float subject3,float subject4,float subject5);
float calcPercentage(float marksObtained,float totalMarks);
string calcGrade(float  marksPercentage);
int main()
{
    float subject1,subject2,subject3,subject4,subject5,marksObtained,marksByPercentage;
    string studentName,gradeObtained;
    cout<<"Enter student name: ";
    cin>>studentName;
    cout<<"Enter Maths marks obtained: ";
    cin>>subject1;
    cout<<"Enter English marks obtained: ";
    cin>>subject2;
    cout<<"Enter Chemistry marks obtained: ";
    cin>>subject3;
    cout<<"Enter Social Science marks obtained: ";
    cin>>subject4;
    cout<<"Enter Biology marks obtained: ";
    cin>>subject5;
    marksObtained=calcTotal(subject1,subject2,subject3,subject4,subject5);
    marksByPercentage=calcPercentage(marksObtained,500);
    gradeObtained= calcGrade(marksByPercentage);
    cout<<"Student name: "<<studentName<<endl;
    cout<<"Total Marks obtained: "<<marksObtained<<endl;
    cout<<"Percentage :"<<marksByPercentage<<endl;
    cout<<"Grade: "<<gradeObtained<<endl;
}
float calcTotal(float subject1,float subject2,float subject3,float subject4,float subject5)
{
    return subject1+subject2+subject3+subject4+subject5;
}
float calcPercentage(float marksObtained,float totalMarks)
{
    return (marksObtained*100)/totalMarks;
}
string calcGrade(float  marksPercentage)
{
    string grade;
    if(marksPercentage<40)
    {
        grade='F';
    }
    else if(marksPercentage>=40&&marksPercentage<=50)
    {
        grade='D';
    }
    else if(marksPercentage>=50&&marksPercentage<=60)
    {
        grade='C';
    }
    else if(marksPercentage>=60&&marksPercentage<=70)
    {
        grade='B';
    }
    else if(marksPercentage>=70&&marksPercentage<=80)
    {
        grade="B+";
    }
    else if(marksPercentage>=80&&marksPercentage<=90)
    {
        grade="A+";
    }
    else if(marksPercentage>=90&&marksPercentage<=100)
    {
        grade="A+";
    }
    return grade;
}