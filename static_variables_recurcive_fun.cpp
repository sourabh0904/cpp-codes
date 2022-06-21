#include<iostream>
using namespace std;

int fun(int n) {
    if(n>0) {
        return fun(n-1) + n;
    }
    return 0;
}
int fun2(int n) {
    int static a=0;             //static vatiable using recurceive function
    if(n>0) {
        a++;
        return fun2(n-1) + a;
    }
    return 0;
}

int main () {
    int x=5;
    cout<<fun(x)<<endl;
    cout<<fun(x)<<endl;
    return 0;
}