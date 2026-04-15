#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;cin>>n;
    string s;
    cin>>s;

    set<char>st;
    int ans=0;
    for(auto c:s){

        c=tolower(c);
        if(c>=97 && c<=122){
            st.insert(c);
        }
    }
    ans=st.size();
    if(ans==26) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}