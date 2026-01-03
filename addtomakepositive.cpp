#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    long long sum=0;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            sum+=a;
        }

        if(sum>=0) cout<<0<<endl;
        else{
            int y= ((-sum)+n-1)/n;
            cout<<y<<endl;
        }
        
	}

}
