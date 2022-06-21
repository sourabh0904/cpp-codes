#include<iostream>
using namespace std;
int allocatebook(int arr[], int n) {
    int s=0;
    int sum=0;
    int ans=-1;
    for(int i=0;i<n;i++) {
        sum=sum+arr[i];
    }
    int e=sum;
    int mid = s+(e-s)/2;
    while(s<=e) {
        if(arr,n,2,mid){
            ans=mid;
            e=mid-1;
        }
        else {
            s=mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
int main() {
    int arr[4]={10,20,30,40};
    allocatebook(arr,4);
    return 0;
}
