#include<iostream>
using namespace std;
int sum(int x , int y)
{
    return x+y;
}

float sum(float x , float y)
{
    return x+y;
}
int sum(int x , int y , int z);
{
    return x+y+z;
}

int main()
{
   
    cout<<sum(10,5)<<endl;
    cout<<sum(10.5f,5.5f)<<endl;
    cout<<sum(5,5,10)<<endl;
    return 0;
}