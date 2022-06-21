#include<iostream>
using namespace std;

int transition(int arr[] , int n) {
    int s=0 , e=n-1;
    int mid = s+(e-s)/2;
    while(s<=e) {
        if(arr[s]!=arr[mid]){
            return mid+1;
        }
        else if(arr[mid]==arr[mid-1]) {
            s=mid+1;
        }   
        else if(arr[mid]!=arr[mid-1]) {
            e=mid;
        }
    }
}

int main() {

    int arr[5] = {0,0,1,1,1};

    transition(arr , 5);
    cout<<"transition point of an array is " <<transition(arr , 5)<<endl;

    return 0;
}