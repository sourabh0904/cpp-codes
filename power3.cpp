#include<iostream>
using namespace std;
int power(int a, int b)
{
    int ans=1;

    cout<<"enter a value of a and b";
    cin>>a>>b;
    for(int i=1;i<=b;i++) {
        ans=ans*a;
    }

    //cout<<"a power b is : "<<ans<<endl;

    return ans;

}

int main()
{
    int a,b;
    int answer = power(a,b);
    cout<<"answer is : "<<answer<<endl;

}