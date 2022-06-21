#include<iostream>
#include<vector>
using namespace std;

void non_zero(vector<int> num) {
    int i=0;
    for(int j=0;j<num.size();j++) {
        if(num[j]!=0) {
            swap(num[i],num[j]);
            i++;
        }
    }
}

int main() {
    int v[3]={0,3,2};

    return 0;
}