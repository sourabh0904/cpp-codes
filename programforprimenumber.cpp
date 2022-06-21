#include<iostream>
using namespace std;
int main()
{
    int n,i,count=0;
    cout<<"enter a number";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        count++;
    }
    if(count==2)
    cout<<"its a prime\n";
    else
    cout<<"not a prime\n";
    return 0;
}