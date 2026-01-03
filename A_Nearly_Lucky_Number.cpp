#include <bits/stdc++.h>
using namespace std;


#define ll long long
int main() {

    ll n;

    cin>>n;
    int count=0;
    ll t=n;

    if(n==0) cout<<"NO";
    while(t>0){
        ll ld = t%10;
        if(ld==4 || ld==7) count++;
        t/=10;
    }

    if(count==4 || count==7) cout<<"YES";
    else cout<<"NO";

    
    
    return 0;
}