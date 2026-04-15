#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        long long n;
        cin>>n;

        // important to check the power of two 
        if((n&(n-1))==0) cout<<"NO\n"; // if its 0 means it has a power of two otherwise it dont have a power of two
        else cout<<"YES\n";
    }
    return 0;
}