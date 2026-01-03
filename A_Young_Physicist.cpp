#include <bits/stdc++.h>
using namespace std;


#define ll long long
int main() {

    ll n,ld,c=0;
    //extract the digits
    vector<ll> dig;
    while(n>0){
        ld=n%10;
        n /= 10;
        dig.push_back(ld);
    }

    for(int i=0;i<dig.size();i++){
        if(dig[i]!= 4 || dig[i] != 7) c++ ;
    }

    if(c>0) cout<<"NO";
    else cout<<"YES";

    




    
    return 0;
}