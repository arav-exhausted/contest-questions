#include <bits/stdc++.h>
using namespace std;


int solve(int n,vector<int> &v){

        int streak=0;
        int ans=0;
        for(int i=0;i<n;i++){
            if(v[i]>0){
                streak++;
                ans=max(streak,ans);
            }else{
                streak=0;
            }

        }
        

        return ans;


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        int answer = solve(n,v);
        cout<<answer<<endl;

    }
    return 0;
}