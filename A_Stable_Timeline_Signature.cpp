#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll sum_of_digit(ll n){
    ll sum=0;
    while(n>0){
        ll digit=n%10;
        n/=10;
        sum+=digit;
    }
    return sum;
}
ll number(ll n,ll k){
    ll s=sum_of_digit(n);
    while(s%k!=0){
        n=n+1;
        s++;
        ll temp = n;
        while(temp % 10 == 0){
            s -= 9;
            temp /= 10;
        }
    }

    return n;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--){
        ll x,k,dup;
        cin>>x>>k;
        dup=x;
        ll ans=0;
        if(sum_of_digit(x)%k==0){
            ans = x;
            
        }
        else{
            ans= number(x,k);
        }
        cout<<ans<<endl;
    }
    return 0;
}