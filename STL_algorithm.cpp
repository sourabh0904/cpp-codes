#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);
        //searching element present or not by using bainary search .
    cout<<"6 is present or not -> "<<binary_search(v.begin(),v.end(),6)<<endl;
    cout<<"lower bound-> "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"upper bound-> "<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    int a=3;
    int b=5;

    cout<<"max of a and b -> "<<max(a,b)<<endl;

    cout<<"min of a and b -> "<<min(a,b)<<endl;

    swap(a,b);

    cout<<"value of a and b after swap -> "<<a<<","<<b<<endl;

    string s = "abcd";
    reverse(s.begin(),s.end());
    cout<<"string-> "<<s<<endl;

    rotate(v.begin(),v.begin(+1),v.end());
    cout<<"after rotate -> "<<endl;
    for()
}