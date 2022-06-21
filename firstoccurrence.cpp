#include<iostream>
using namespace std;

int firstoccurrence(int arr[] , int n , int key) {
    int s=0;
    int e=n-1;
    int mid = (s+(e-s)/2);
    int ans=-1;
    while(s<=e) {
        fflush(stdin);
        if(arr[mid==key]){
            ans=mid;
            e=mid-1;
        }
        else if(key>mid) {
            s=mid+1;
        }
        else if(key<mid) {
            e= mid - 1;
        }
        mid = (s+(e-s)/2);
    }
    return ans;
}

int lastoccurrence(int arr[] , int n , int key) {
    int s=0;
    int e=n-1;
    int mid = (s+(e-s)/2);
    int ans=-1;
    while(s<=e) {
        if(arr[mid==key]){
            ans=mid;
            s=mid+1;
        }
        else if(key>mid) {
            s=mid+1;
        }
        else if(key<mid) {
            e= mid - 1;
        }
        mid = (s+(e-s)/2);
    }
    return ans;
}

int main() 
{
    int arr[7]={1,2,3,3,3,3,5};

    firstoccurrence(arr , 5 , 3);
    cout<<"fist occurrence of 3 is "<<firstoccurrence(arr , 7 , 3)<<endl;
    cout<<"last occurrence of 3 is "<<lastoccurrence(arr , 7 , 3)<<endl;

    return 0;
}