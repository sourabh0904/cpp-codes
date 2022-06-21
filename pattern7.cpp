#include<iostream>
using namespace std;
int main()
{
    int row;
    int col;

    cout<<"enter number of row: ";
    cin>>row;
    cout<<"enter number of col: ";
    cin>>col;

    for(int i=1;i<=row;++i)
    {
        for(int j=1;j<=col;++j)
        {
            cout<<i+j-1;
        }
        cout<<endl;
    }
    return 0;
}