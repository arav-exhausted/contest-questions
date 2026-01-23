#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        vector<int>help=a;
        int ans=0;
        sort(help.begin(),help.end());
        for(int i=0;i<n;i++){
            if(help[i]!=a[i]){
                ans=0;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--) {
            if (a[i] != i + 1) {
                ans += a[i]; 
                break; 
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}