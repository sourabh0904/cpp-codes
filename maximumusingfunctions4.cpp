#include<iostream>
using namespace std;
int max(int a, int b=0,int c=0) {
    return a>b && a>c ?a:(b>c?b:c);
}
int main()
{
    int a,b,c;
    cout<<"enter a value a,b,c";
    cin>>a>>b>>c;

    cout<<max(a,b,c)<<endl;

    return 0;
}