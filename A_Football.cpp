#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;

    int i=0;
    int cnt=1;
    int mcnt=1;

    for(int j=1;j<s.length();j++){
        if(s[j]==s[j-1]){
            cnt++;
            mcnt=max(mcnt,cnt);
        }else{
            cnt=1;
        }

    }

    if(mcnt>=7) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}