#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        int g=0;

        for(int i=0;i<n;i++){
            if(v[i]==k) g=1;
            
        }

        if(g==0) cout<<"NO"<<endl;
        else cout<<"YES\n";
    }
    return 0;
}