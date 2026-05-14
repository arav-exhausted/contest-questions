#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;cin>>x;
	    int ans=0;
	    if(x<=20) ans = x*10;
        else{
            ans = 20*10 + (5*(x-20)/2);
        }

        cout<<ans<<endl;
	}

}
