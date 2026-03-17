#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    getline(cin,s);
    set<char>st;
    int n= s.length();
    if(s[s.length()-1]=='}' && s[0]=='{'){
        if(s.length()==2) {
            cout<<0<<endl;
            return 0;
        }
        else{
            for(int i=1;i<n-1;i++){
                if(s[i]>=97 && s[i]<=122){
                    st.insert(s[i]);
                }
            }
        }
    }


    cout<<st.size()<<endl;
    return 0;
}