#include<iostream>
using namespace std;
int main()
{
    int x=10;
    //refrence must be initilaised 
    int &y=x;

    cout<<x<<endl;

    x++;
    y++;

    cout<<x<<endl;

    return 0;
    
}