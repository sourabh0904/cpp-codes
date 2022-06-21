#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"enter a year";
    cin>>year;
    if(year % 4 == 0)
    {
        if(year % 100 == 0)
        {
            if(year % 400 == 0)
            cout<<year<<"year is a leap year";
            else
            cout<<year<<"year is non leap year";
        }
        cout<<year<<"Year is a leap year";
    }
    return 0;
}