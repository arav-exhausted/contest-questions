#include <bits/stdc++.h>
using namespace std;


string odd_string(string s ){
    unordered_map<char,int> c;
    for(char x:s){
        c[x]++;
    }
    int g=0;
    for(auto l:c){
        if(l.second>2){
            return "NO";
        }
    }
    return "YES";

}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        string strng=odd_string(s);
        cout<<strng<<endl;
    }
    return 0;
}