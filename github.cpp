#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    int total=a/5;
	    if(a%5==0)
	    {
	        total--;
	    }
	    int unaffected=b/5;
	    if(b%5==0)
	    {
	        unaffected--;
	    }
	    cout<<total-unaffected<<endl;
	}
}