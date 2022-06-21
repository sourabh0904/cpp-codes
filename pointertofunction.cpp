#include<iostream>
using namespace std;
void display()
{
    cout<<"hello";
}
int main()
{
    //pointer to funtion must inclosed in brakets 
    void (*fp)();   //diclaration.
    fp = display;  //initilisation.
    (*p)();        //function call.
}