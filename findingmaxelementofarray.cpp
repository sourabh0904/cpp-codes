#include<iostream>
using namespace std;
int main()
{
    int A[5]={29,39,92,33,34};
    int n=5,max=A[0];
    for(int i=0;i<5;i++)
    {
        if(A[i]>max)
        {
            max=A[i];
        }
    }
    cout<<"maximum is "<<max<<endl;
    return 0;

}