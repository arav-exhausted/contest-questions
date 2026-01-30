#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    int m;
    cin>>m;
    int n=s.size();
    vector<int>hash(n,0);
        int identical=0;
        hash[0]=0;
        for(int i=1;i<n;i++){
            hash[i]=hash[i-1];
            if(s[i]==s[i-1]) hash[i]++;
        }

    while(m--){
        int l,r;
        cin>>l>>r;
        identical = hash[r-1]-hash[l-1];

        cout<<identical<<endl;
    }
    return 0;
}