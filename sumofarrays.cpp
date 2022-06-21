#include<iostream>
using namespace std;
int main()
{
    int A[9]={1,2,3,4,5,6,7,8,9};
    int n=9,sum=0;
    for(int i=0;i<9;i++)
    {
        sum=sum+A[i];

    }
    cout<<"sum is"<<sum<<endl;
    return 0;
}