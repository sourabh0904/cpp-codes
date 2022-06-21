#include<iostream>
#include<stack>
using namespace std;

int main() {
    stack<string> s;        //last in first out 

    s.push("sourabh");
    s.push("dilip");
    s.push("patidar");

    cout<<"top element -> "<<s.top()<<endl;

    cout<<"size of stack before pop "<<s.size()<<endl;

    s.pop();

    cout<<"top element -> "<<s.top()<<endl;

    cout<<"size of stack after pop "<<s.size()<<endl;

    cout<<"empty or not "<<s.empty()<<endl;
}