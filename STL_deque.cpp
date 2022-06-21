#include<iostream>
#include<deque>
using namespace std;
int main() {
    deque<int> d;

    d.push_back(1);
    d.push_back(2);
    
    //d.pop_front(1);

    cout<<"print first index element -> "<<d.at(1)<<endl;

    cout<<"front "<<d.front()<<endl;
    cout<<"back "<<d.back()<<endl;

    cout<<"empty or not "<<d.empty()<<endl;

    cout<<"size before erase -> "<<d.size()<<endl;

    d.erase(d.begin(),d.begin()+1);    //for deleting first element we given range from begin to begin + 1.

    cout<<"size after erase -> "<<d.size()<<endl;

    for(int i:d) {
        cout<<i<<endl;
    }

}