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
        int count=0;
        stack<char>st;
        bool found = false;

        for(auto c:s){
            
            if(c=='.'){

                st.push(c);
                count++;

                if(st.size()==3){
                found = true;
                break;
                }
            }
            
            else{
                while(!st.empty()){
                    st.pop();
                }
            }

        }

        if(found) cout<<2<<endl;
        else cout<<count<<endl;

    }
    return 0;
}