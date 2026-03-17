#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b,c;cin>>a>>b>>c;
    int ans=0;
    vector<int>v(7);
    v[0]= (a*b)+c;
    v[1]=(b*c)+a;
    v[2]=(a+b)*c;
    v[3]=(b+c)*a;
    v[4]=a+b+c;
    v[5]=a+b*c;
    v[6]=a*b*c;
    sort(v.begin(),v.end());
    cout<<v[6];
    return 0;
}