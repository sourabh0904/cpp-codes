#include<iostream>
using namespace std;
int main() {
    int x=10 , y=5 , z;
    z=x/y;
    try {
        if(y==0) {
            throw 1;
            z=x/y;
            cout<<z<<endl;
        }

    }
    catch (int e) {
        cout<<"divistion by zero "<<e<<endl;
    }
    cout<<"bye";
}