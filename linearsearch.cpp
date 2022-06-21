#include<iostream>
using namespace std;
int main()
{
    int A[10]={2,4,6,8,10,12,3,5,7,9};
    int key;
    cout<<"enter a key to serch";
    cin>>key;

    for(int i=0;i<10;i++)
    {
        if(key==A[i])
        {
            cout<<"key is found at"<<i<<endl;
            return 0;
        }
    }
    cout<<"enter key is not found"<<endl;

    return 0;
}