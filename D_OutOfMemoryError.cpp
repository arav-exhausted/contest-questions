#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--){
        ll n,m,h;
        cin>>n>>m>>h;
        vector<ll>a(n);
        for(ll i =0;i<n;i++){
            cin>>a[i];
        }
        vector<ll>ans=a;
        for(ll i =0 ; i<m; i++){
            ll b,c;
            cin>>b>>c;
            if((ans[b-1]+c)>h){
                ans=a;
            }else{
                ans[b-1]+=c;
            }
        }
        for(auto it=ans.begin();it!=ans.end();it++){
            cout<<*it <<" ";
        }
        cout<<endl;
    }
    return 0;
}