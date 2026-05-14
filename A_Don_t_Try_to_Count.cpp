#include <bits/stdc++.h>
using namespace std;

int main() {
    

    int t;
    cin>>t;

    while(t--){
        string x,s;
        int n,m;
        cin>>n>>m;
        cin>>x;
        cin>>s;
        int ans=-1;
        for(int i=0;i<6;i++){
            if(x.find(s)!= string::npos){
                ans=i;
                break;
            } 
            x+=x;
        }
        cout<<ans<<endl;
        
    }
    return 0;
}