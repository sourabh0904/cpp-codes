#include<iostream>
using namespace std;
void revers(int arr[],int size) {

    for(int i=0;i<size;i+=2) {

        if(i+1<size){
        swap(arr[i],arr[i+1]);
        }
    }

}

void printArray(int arr[], int n) {
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int brr[5]={1,2,6,3,9};
    
    revers(arr , 10 );

    printArray(arr, 10);

    revers(brr , 5 );

    printArray(brr, 5);

    return 0;
}