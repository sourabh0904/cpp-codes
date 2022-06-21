#include<iostream>
using namespace std;
int main()
{
    int mx=-1999999;
    int n;
    cout<<"enter a value of n";
    cin>>n;
    int A[n];

    for(int i=0;i<n;i++)
    {
        cout<<"enter a elements of an array";
        cin>>A[i]; 
    }

    for(int i=0;i<=n;i++)
    {
        mx = max(mx , A[i]);
        cout<<mx<<endl;
    }

    return 0;
}