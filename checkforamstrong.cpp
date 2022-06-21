#include<Iostream>
using namespace std;
int main()
{
    int n,r,sum=0,m;
    cout<<"enter n";
    cin>>n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        sum=sum+r*r*r;
    }
    if(sum==m)
    cout<<"its amstrong";
    else
    cout<<"not amstrong";
    return 0;

}
