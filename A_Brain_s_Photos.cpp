#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;cin>>n>>m;
    char arr[n][m];
    bool ans=true;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
            
            if(arr[i][j]=='C' || arr[i][j]=='M' || arr[i][j]=='Y'){
                ans=false;
               
            }
            
        }
    }

    if(ans) cout<<"#Black&White\n";
    else cout<<"#Color\n";


    return 0;
}