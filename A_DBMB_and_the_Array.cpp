#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,s,x;
        cin>>n>>s>>x;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=v[i];
        }
        bool multiple=false;
        for(int i=0;i<n;i++){
            if(v[i]%x==0){
                multiple=true;
            }
        }
        if(sum>s){
            cout<<"NO"<<endl;
        }else if((s-sum)%x!=0){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
    }
    return 0;
}