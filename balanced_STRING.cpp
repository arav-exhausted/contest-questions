#include <bits/stdc++.h>
using namespace std;

unordered_map<char,int>mpp={{'(',-1},{'[',-1},{'{',-1}};
string isbalanced(string s){
    stack<char>st;
    for(char bracket:s){
        if(mpp[bracket]<0){
            st.push(bracket);
        }else{
            if(st.empty()) cout<<"NO";
            char top=st.top();
            st.pop();
            if(mpp[top]+mpp[bracket]!=0) return "NO";
        }
    }
    if(st.empty()) return "YES";
    else return "NO";
}

int main() {
    

    string s;
    cin>>s;
    cout<<isbalanced(s);
     
    return 0;
}