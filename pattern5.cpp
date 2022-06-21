#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a value of n";
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        char ch = 'A'+n-i;
        while(j<=i){

            cout<<ch<<" ";
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}