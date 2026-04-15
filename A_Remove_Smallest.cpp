#include <bits/stdc++.h>
using namespace std;



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(auto &c: a){
            cin>>c;
        }
        if(n==1){
            cout<<"YES\n";
        }
        else{sort(a.begin(),a.end());
        bool ans = false;
        for(int i=n-1;i>0;i--){
            if(abs(a[i]-a[i-1])<=1){
                ans=true;
            }
            else{
                ans=false;
                break;
            }
        }
        if(ans) cout<<"YES\n";
        else cout<<"NO\n";}
    }  
    return 0;
}