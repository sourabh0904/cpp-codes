#include<iostream>
using namespace std;
class rectangle
{
    //hiding data by using private 
    private:
    int length;
    int breadth;

    public:
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

    int area() {
    return length*breadth;}

    int perimeter() {
    return 2*(length+breadth); }
};

int main()
{
    rectangle r1;

    r1.setLength(10);
    r1.setBreadth(5);
    cout<<r1.area()<<endl;
    cout<<r1.perimeter()<<endl;

    return 0;
}
