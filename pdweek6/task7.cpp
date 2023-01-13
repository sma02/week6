#include <iostream>
#include <cmath>
using namespace std;
int diffHour(int biggerTime, int smallerTime);
int main()
{
    int examHour, examMin, studentHour, studentMin, timeReturned, timeHour, timeMin;
    cout << "Enter exam starting time(hours): ";
    cin >> examHour;
    cout << "Enter exam starting time(mins): ";
    cin >> examMin;
    cout << "Enter student arrival time(hours): ";
    cin >> studentHour;
    cout << "Enter student arrival time(mins): ";
    cin >> studentMin;
    int examTime = examHour * 60 + examMin;
    int studentTime = studentHour * 60 + studentMin;
    if (examTime > studentTime)
    {
        timeReturned = diffHour(examTime, studentTime);
    }
    else
    {
        timeReturned = diffHour(studentTime, examTime);
    }
    if (examTime > studentTime)
    {
        if (timeReturned > 30)
        {
            cout << "Early" << endl;
            if (timeReturned > 59)
            {
                cout << timeReturned / 60 << "hours and ";
                cout << timeReturned % 60 << "mins before the start" << endl;
            }
            else
            {
                cout << timeReturned << "mins before the start" << endl;
            }
        }
        else if (timeReturned <= 30)
        {
            cout << "On time" << endl;
            cout << timeReturned << "mins before the start" << endl;
        }
    }
    else if(studentTime>examTime)
    {
        cout << "Late" << endl;
        if (timeReturned > 59)
        {
                cout << timeReturned / 60 << "hours and ";
                cout << timeReturned % 60 << "mins before the start" << endl;
        }
        else
        {
            cout << timeReturned << "mins after the start" << endl;
        }
    }
    else{
     cout << "On time" << endl;   
    }
}
int diffHour(int biggerTime, int smallerTime)
{
    return biggerTime - smallerTime;
}