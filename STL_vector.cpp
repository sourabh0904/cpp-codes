#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> v;

    vector<int> a(5,1); //it means all element assingn with vlaue 1.
    cout<<"print a"<<endl;
    for(int i:a) {
        cout<<i<<" ";
    }cout<<endl;

    cout<<"capacity -> "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"capacity -> "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"capacity -> "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"capacity -> "<<v.capacity()<<endl;
    
    cout<<"element at 2nd index is -> "<<v.at(2)<<endl;

    cout<<"frist element is -> "<<v.front()<<endl;

    cout<<"element at last index is -> "<<v.back()<<endl;

    cout<<"before pop "<<endl;
    for(int i:v) {
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();

    cout<<"after pop "<<endl;
    for(int i:v) {
        cout<<i<<" ";
    }cout<<endl;

    cout<<"size before clear -> "<<v.size()<<endl;

    v.clear();

    cout<<"size after clear -> "<<v.size()<<endl;

}