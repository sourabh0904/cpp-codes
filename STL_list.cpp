#include<iostream>
#include<list>
using namespace std;

int main() {
    list<int> l;                //listing 

    list<int> n(5,100) ;        //coping list 'l' to 'n' 5 element by value 100.
    cout<<"print n "<<endl;
    for(int i:n) {
        cout<<i<<" ";
    }
    cout<<endl;

    l.push_back(1) ;
    l.push_front(2);

    for(int i:l) {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"size of list "<<l.size()<<endl;

    l.erase(l.begin());
    cout<<"after erase "<<endl;
    for(int i:l) {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"size of list after erase "<<l.size()<<endl;
}