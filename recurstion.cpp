#include<iostream> 
using namespace std;
int fun(int i) {
    if(i>0) {
        cout<<i<<" ";       //Before a function is calling time , accending 
        fun(i-1);
    }

}
int fun1(int i) {
    if(i>0) {
        fun(i-1);
        cout<<i<<" ";       //After a function calling is returning time , descending
    }

}
int main() {
    fun(10);
    cout<<endl;
    fun1(10);
    return 0;
}