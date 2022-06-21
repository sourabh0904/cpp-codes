#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a,b,c,r1,r2;
    cout<<"enter a,b,and c";
    cin>>a>>b>>c;
    d=b*b-4*a*c;
    if(d==0)
    {
        cout<<"roots are real and equal";
        cout<<endl<<(-b/(2*a));
    }
    else
    {
        if(d>0)
        {
            cout<<"roots are real and unequal";
            cout<<endl<<(-b+sqrt(d))/(2*a);
            cout<<endl<<(-b+sqrt(d))/(2*a);
        }
        else(d<0)
        {
            cout<<"imaginary";
        }
    }
    return 0;
}