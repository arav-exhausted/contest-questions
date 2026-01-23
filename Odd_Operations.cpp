#include <bits/stdc++.h>
using namespace std;

int isodd(long long n){
    if(n%2!=0) return -1;
    
}

int main() {
	// your code goes here
    long long t;
    cin>>t;
    while(t--){
        long long n,count=0;
        cin>>n;
        cout<<isodd(n)<<endl;
        
    }
}
