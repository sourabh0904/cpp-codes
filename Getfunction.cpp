#include<iostream>
using namespace std;
int INT_MIN;
int INT_MAX;

int Get_min(int num[],int n)
{
    int min = INT_MAX;

    for(int i=0;i<n;i++) {
        if(num[i]<min){
            min=num[i];
        }
    }

    return min;
}

int Get_max(int num[],int n)
{
    int max = INT_MIN;

    for(int i=0;i<n;i++) {
        if(num[i]>max){
            max=num[i];
        }
    }

    return max;
}

int main()
{
    int size;
    cin>>size;
    int num[100];

    for(int i=0;i<size;i++) {
        cin>>num[i];
    }

    cout<<"MAXIMUM ELEMENT OF AN ARRAY IS: "<<Get_max(num,size)<<endl;
    cout<<"MINIMUM ELEMENT OF AN ARRAY IS: "<<Get_min(num,size)<<endl;

    return 0;
}