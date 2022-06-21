#include<iostream>
#include<queue>
using namespace std;

int main() {
    queue<string> q;        //frist in frist out.

    q.push("sourabh");
    q.push("dilip");
    q.push("patidar");

    cout<<"first element "<<q.front()<<endl;
    cout<<"size of queue before pop "<<q.size()<<endl;

    q.pop();
    cout<<"fist element "<<q.front()<<endl;

    cout<<"size of queue after pop "<<q.size()<<endl;
}