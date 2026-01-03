#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n,k,w,req=0,borrow;
    cin>>k>>n>>w;

    for(int i=w;i>=1;i--){
        req+= i*k;
        
    }
    if(req>=n) {
        borrow= req-n;
        cout<<borrow;
    }
    else {
        cout<<0;
    }
    

    return 0;
}