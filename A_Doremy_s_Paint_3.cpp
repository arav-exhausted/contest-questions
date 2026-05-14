#include <bits/stdc++.h>
using namespace std;

int main() {
    int t ;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[a[i]]++;
        }
        if(mp.size()>2) {cout<<"No\n";continue;}
        if(abs(mp.begin()->second - mp.rbegin()->second)<=1) cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}