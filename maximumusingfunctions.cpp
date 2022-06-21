#include<iostream>
using namespace std;
int max(int a,int b,int c) {
    return a>b && a>c ?a:(b>c?b:c);
}

int main()
{
    cout<<max(10,23,12)<<endl;
    return 0;
}