#include<bits/stdc++.h>
using namespace std;
void sort_0_1_2(int a[],int n); // function prototype
int main()
 {
        int n;       // size of array
        cin >> n;  
        int arr[n];   // suppose input is {0,1,2,1,0,1,2}
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        sort_0_1_2(arr, n);
        for(int i=0;i<n;i++)
        {
            cout << arr[i]  << " ";
        }
        cout << endl;      
    
    return 0;
}
void sort_0_1_2(int a[], int n)
{
    int j=0;
    // It will sort element 0
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            swap(a[i],a[j]);
            j++;
        }
        else
          continue;
    }
    
    //it will sort element 1
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            swap(a[i],a[j]);
            j++;
        }
        else
          continue;
    }
    // It will sort element 2 
    for(int i=0;i<n;i++)
    {
        if(a[i]==2)
        {
            swap(a[i],a[j]);
            j++;
        }
        else
          continue;
    }
}