#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    for(auto &c:s){
        c=tolower(c);
    }
    vector<char> output;
    for(auto &c:s){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='y'){
        }
        else{
            char t='.';
            output.push_back(t);
            output.push_back(c);
        }
    }
    for(auto c:output){
        cout<<c;
    }
    return 0;
}