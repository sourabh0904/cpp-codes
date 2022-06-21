#include<iostream>
using namespace std; 

void revese_string(char name[],int n) {
    int s=0;
    int e=n-1;
    while(s<=e) {
        swap(name[s],name[e]);
            s++;
            e--;
    }
}
int getlength(char name[]) {
    int count = 0;
    for(int i=0;name[i]!='\0';i++) {
        count++;
    }
    return count;
}

int main() {
    char name[20];
    cout<<"enter your name "<<endl;
    cin>>name;
    int len=getlength(name);
    revese_string(name,len);
    cout<<name<<endl;
}