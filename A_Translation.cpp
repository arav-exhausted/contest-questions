#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s , t;
    cin>>s>>t;

    if(s.length()!=t.length()){
        cout<<"NO"<<endl;
        return 0;
    }
    bool cont=true;
    for(int i=0;i<s.length();i++){
        if(s[s.length()-i-1]==t[i]) cont=true;
        else {
            cont=false;
            break;
        }
    }

    if(cont) cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}