#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    char c;
    cin>>c;
    string s;
    cin>>s;
    string given="qwertyuiopasdfghjkl;zxcvbnm,./";
    string ans="";
    if(c=='R'){
        for(auto d:s){

            int index= given.find(d);
            ans+=given[index-1];
            
        }

    }else{
        for(auto d:s){

            int index= given.find(d);
            ans+=given[index+1];
            
        }
    }

    cout<<ans<<endl;


    return 0;
}