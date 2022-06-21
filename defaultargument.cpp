#include<iostream>
using namespace std;
/*int add(int x,int y){
    return x+y;
}

int add(int x,int y,int z) {
    return x+y+z;
}*/

//here we concluding insted of writing frist add we assing z=0 so it become optional for add.

int add(int x,int y,int z=0) {
    return x+y+z;
}

int main()
{
    cout<<add(3,4)<<endl;
    cout<<add(3,4,5)<<endl;
    return 0;
}