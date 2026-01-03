#include <bits/stdc++.h>
using namespace std;

int main() {

    string s,out;
    cin>>s;
    int t=s.length();
    vector<int> v;
    for(int i=0;i<t;i++){
        if(s[i]>='1' && s[i]<='3'){
            v.push_back(s[i]-'0');
        }
    }

    sort(v.begin(),v.end());

    for(int i=0;i<v.size();i++){
        cout<<v[i];
        if(i < v.size() - 1) cout << "+";
    }



    return 0;
}