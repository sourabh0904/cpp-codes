#include<iostream>
using namespace std;
int main()
{
    int day;
    cout<<"enter dy no";
    cin>>day;
    if(day==1)
        cout<<"mon"<<endl;
    else if(day==2)
        cout<<"tue"<<endl;
    else if(day==3)
        cout<<"wed"<<endl;
    else if(day==4)
        cout<<"thur"<<endl;
    else if(day==5)
        cout<<"fri"<<endl;
    else if(day==6)
        cout<<"sat"<<endl;
    else if(day==7)
        cout<<"sun"<<endl;
    else
        cout<<"invalid day"<<endl;
    return 0;                                 
}