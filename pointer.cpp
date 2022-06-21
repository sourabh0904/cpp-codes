#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int* ap=&a;

    cout<<*ap<<endl;

    *ap=20;
    cout<<a<<endl;

    return 0;
}