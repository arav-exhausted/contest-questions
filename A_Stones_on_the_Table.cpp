#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==s[i+1]){
            ans++;
        }
        else continue;
    }
    

    cout<<ans<<endl;
    return 0;
}