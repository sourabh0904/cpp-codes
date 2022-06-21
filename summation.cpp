#include<iostream>
using namespace std;

int Sum(int A[],int n) {
    int sum=0;
    for(int i=0;i<n;i++) {
        sum=sum+A[i];

    }

    return sum;
}


int main()
{
    int n;
    cin>>n;

    int A[100];

    for(int i=0;i<n;i++) {
        cin>>A[i];
    }

    cout<<"summation of elements of an array is: "<<Sum(A,n)<<endl;

    return 0;

}