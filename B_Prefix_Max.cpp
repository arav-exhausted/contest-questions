#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long sum=0;

        vector<long long> a(n);
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }        
        long long l= *max_element(a.begin(),a.end());

        sum=l*n;

        cout<<sum<<endl;
    }
    return 0;
}