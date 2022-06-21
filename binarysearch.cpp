#include<iostream>
using namespace std;

int binarySearch(int arr[] , int size , int key) {
    int start=0;
    int end=size-1;

    int mid = start + (end - start)/2;

    while(start<=end) {
        if(arr[mid] == key) {
            return mid;
        }
        if(arr[mid]<key) {
            start = (mid + 1);
        }
        if(arr[mid]>key) {
            end = (mid -1);
        }
        mid = start + (end - start)/2;
    }
    return -1;
}

int main() {
    int arr[6]={1,4,23,45,46,100};

    cout<<"index of key is : "<<binarySearch(arr , 6 , 100)<<endl;
    binarySearch(arr , 6 , 1);

    return 0;
}