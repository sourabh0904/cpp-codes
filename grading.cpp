#include<iostream>
using namespace std;
int main()
{
    int m1,m2,m3,total;
    float avg;
    cout<<"enter marks of 3 subjects";
    cin>>m1>>m2>>m3;
    total=m1+m2+m3;
    avg=total/(3.0);
    if(avg>=60)
    {
        cout<<"A"<<endl;
    }
    else
    {
        if(avg>=35 && avg<60)
        {
            cout<<"B"<<endl;
        }
        else
        {
            cout<<"c"<<endl;
        }
    }
    return 0;
}