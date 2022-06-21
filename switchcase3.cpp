#include<iostream>
using namespace std;
int main()
{
    cout<<"menu\n";
    cout<<"1. add\n"<<"2. sub\n"<<"3. mut\n"<<"4. div\n";
    int option;
    cout<<"enter you choice";
    cin>>option;
    int a,b,c;
    cout<<"enter 2 no";
    cin>>a,b;
    switch(option)
    {
        case 1: c=a+b;
            break;
        case 2: c=a-b;
            break;
        case 3: c=a*b;
            break;
        case 4: c=a/b;
    }
    cout<<"result is"<<c<<endl;
    return 0;
}