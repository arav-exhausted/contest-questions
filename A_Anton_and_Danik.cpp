#include <bits/stdc++.h>
using namespace std;

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);
    int n;
    cin>>n;
    vector<char>a(n);
    map<char,int>mp;
    for(auto &c:a){
        cin>>c;
        mp[c]++;
    }
    if(mp['A']>mp['D']){
        cout<<"Anton";
    }else if(mp['A']<mp['D']){
        cout<<"Danik";
    }else cout<<"Friendship";

    return 0;
}