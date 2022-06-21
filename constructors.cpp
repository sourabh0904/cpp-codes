#include<iostream>
using namespace std;
class rectangle
{
    private:
    int length;
    int breadth;

    public:

    /*rectangle()  //first type of constructor
    {
        length=1;    //no need to use it because second type also covers this 
        breadth=1;
    }*/
    rectangle(int l,int b)  //second type of constructor
    {
        setLength(l);
        setBreadth(b);
    }
    rectangle(rectangle &r)  //3rd type of constructor
    {
        length=r.length;
        breadth=r.breadth;
    }
    void setLength(int l)
    {
        if(l>=0){
        length=l;
        }
        else {
            length=0;
        }
    }
    void setBreadth(int b)
    {
        if(b>=0){
        breadth=b;
        }
        else {
            breadth=0;
        }
    }
    getLength()
    {
        return length;
    }
    getBreadth()
    {
        return breadth;
    }
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
};
int main()
{
    rectangle r1(10,5);
    rectangle r2(r1);
    cout<<r2.area()<<endl;
    cout<<r2.perimeter()<<endl;

}
