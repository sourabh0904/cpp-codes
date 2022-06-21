#include<iostream>
using namespace std;

int t;
int AP(int n) {

    t = 3*n + 7;

    return t;

}

int main()
{
    int n;
    cin>>n;

    if(AP(n)) {
        
        cout<<"nth tearm of an ap is : "<<t<<endl;

    }

    return 0;

}