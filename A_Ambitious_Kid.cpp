#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    unordered_set<int>v;

    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.insert(a);
    } 

    int ans=INT32_MIN;
    bool cond= true;

    for(int x:v){
        if(cond || abs(x) < ans){
            ans=abs(x);
            cond=false;
        }
    }

    cout<<ans<<endl;

    return 0;
}