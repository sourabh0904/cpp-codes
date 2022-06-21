#include<iostream>
using namespace std;
class yours;
class my {
    private : int a;
    protected :int b;
    public : int c;
    friend yours;
};
class yours {
    public :
        my m;
        void fun()
        {
            m.a=10;
            m.b=20;
            m.c=30;
        }
};