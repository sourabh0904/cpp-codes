#include<iostream>
using namespace std;
int main()
{
    float MRP;
    float discount;
    cout<<"enter mrp price";
    cin>>MRP;
    if(MRP>=5000)
    {
        discount=MRP*10/100;
    }
    else if(MRP>=1000 && MRP<5000)
    {
        discount=MRP*5/100;
    }
    cout<<"MRP is"<<MRP<<endl;
    cout<<"discount is"<<discount<<endl;
    cout<<"discounted amount is"<<MRP-discount<<endl;
    return 0;
}