#include<iostream>
using namespace std;

//finding maximum using default argument function.

int max(int x,int y,int z=0) {
    return x>y && x>z ?x:(y>z?y:z);
}

int main()
{
    cout<<max(10,13,12)<<endl;
    return 0;
}