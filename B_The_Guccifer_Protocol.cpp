#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ll t;
    cin>>t;
    while(t--){
        ll a,b,c,d;
        cin>>a>>b>>c>>d;


        ll cnt=0;
        if(b>a){
            cnt++;
        }
        if(c>a){
            cnt++;
        }
        if(d>a){
            cnt++;
        }

        cout<<cnt<<endl;
    }
    return 0;
}