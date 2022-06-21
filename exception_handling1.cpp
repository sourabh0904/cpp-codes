#include<iostream>
using namespace std;
int main() {
    int x=10,y=0,z;
    try {
    if(y==0) {
        throw 1.5;

    }
    z=x/y;
    cout<<z<<endl;
    }
    catch(double e) {
        cout<<"divisition by zero "<<e<<endl;
    }
    cout<<"bye";

}