#include <iostream>
using namespace std;
int main()
{
    int n,num,digit,rev=0;

    cout<<"enter a possitive number";
    cin>>num;
    n=num;

    do{
        digit=n%10;
        rev=(rev*10)+num;
        num=n/10;
    } while(num!=0);
    cout<<"the revers of number is "<<rev<<endl;

    if(n==rev)
    {
        cout<<"the revers is palindrome";
    }
    else
    {
        cout<<"revers is not palindrome";
    }
    return 0;
    
}