#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        unordered_map<char,int>m;
        for(auto c:s){
            m[c]++;
        }
        int ans=0;
        for(auto d:m){
            if(d.second>1){
                ans+=2+(d.second-1);
            }
            else ans+=2;
        }

        cout<<ans<<endl;


        

    }
    return 0;
}