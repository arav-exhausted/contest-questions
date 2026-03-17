#include <bits/stdc++.h>
using namespace std;


#define ll long long

int longest_subarray(int n,vector<int> &v,int k){
    int l=0,r=0;
    int sum=0,maxlength=0;
    while(r<n){
        sum+=v[r];
        while(sum>k){
            sum-=v[l];
            l+=1;
        }
        if(sum<=k){
            maxlength=max(maxlength,r-l+1);
            r+=1;
        }
    }
    return maxlength;
}







int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin>>t;
    while(t--){

    }
    
    return 0;
}