#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int x,y,n; cin>>x>>y>>n;
        int a=x-(y*n);
        if(a>0) cout<<a<<endl;
        else cout<<0<<endl;
    }
    return 0;
}