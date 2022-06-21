#include<iostream>
using namespace std;

void revers(int arr[] , int n) {

    int start = 0;
    int end = n-1;

    while(start<=end) {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[],int n) {

    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

int main()
{
    int arr[4]={1,2,3,4};
    int brr[5]={1,3,4,-9,88};

    revers(arr,4);
    revers(brr,5);

    printArray(arr,4);
    printArray(brr,5);

    return 0;
}