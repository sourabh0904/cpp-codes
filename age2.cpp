#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter age";
    cin>>age;
    if(age<=12 || age>=60)
    {
        cout<<"eligible";
    }
    else
    {
        cout<<"not eligible";
    }
    return 0;
}