#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main() {
    
    int t;
    cin>>t;

    int count=0;
    while(t--){

        vector<ll> v(3);
        ll sum=0;
        for(int i=0;i<3;i++){
            cin>>v[i];
            sum+=v[i];
        }
        
        if(sum>=2) count++;
    }

    cout<<count;
    return 0;
}