#include <bits/stdc++.h>
using namespace std;

string solve(int n,vector<int>&v){
    for(auto &c:v){
        if(c==1) return "HARD";
    }
    return "EASY";
}
int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &c:v){
        cin>>c;
    }
    cout<<solve(n,v);
    return 0;
}