#include<iostream>
using namespace std;

int firstocc(int arr[] , int n , int key) {
    int s=0;
    int e=n-1;
    int mid = (s+(e-s)/2);
    cout<<"index of mid tearm is : "<<mid<<endl;
    int ans=-1;
    while(s<=e) {
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

int main() 
{
    int arr[5]={1,2,3,3,5};

    firstocc(arr , 5 , 3);
    cout<<"fist occarance of 3 is "<<firstocc(arr , 5 , 3)<<endl;

    return 0;
}