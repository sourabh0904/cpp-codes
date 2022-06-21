#include<iostream>
using namespace std;

void printArray(int arr[] , int n) {
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}

void shortOne(int arr[] , int n) {
    int left=0 , right=n-1;

    while(left<right) {
        while(arr[left]==0 && left<<right){
            left++;
        }
        while(arr[right]==1 && left<right) {
            right--;
        }
        swap(arr[left] , arr[right]);
        left++;
        right--;
    }
}

int main() {
    
    int arr[4]={1,0,0,1};

    shortOne(arr , 4);
    printArray(arr , 4);
    
    return 0;

}