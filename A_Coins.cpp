#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        long long sum=0;
        for(int i=1;i<(n/2);i++){
            sum+=2*i;
            if(sum>=n) continue;
        }
    }

    return 0;
}