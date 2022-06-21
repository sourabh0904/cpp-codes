#include<iostream>
#include<map>
using namespace std;
int main() {
    map<int,string> m;
    m[1]="sourabh";
    m[2]="patidar";
    m[13]="rakesh";

    m.insert( {5,"nikhil"});

    cout<<"before erase -> "<<endl;
    for(auto i:m) {
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;
    
    cout<<"finding 13 -> "<<m.count(13)<<endl;

    m.erase(13);

    cout<<"after erase -> "<<endl;
    for(auto i:m) {
        cout<<i.first<<" "<<i.second<<endl;
    }

    auto it = m.find(2);

    for(auto i=it;i!=m.end();i++) {
        cout<<(*i).first<<endl;
    }
    cout<<endl;
}