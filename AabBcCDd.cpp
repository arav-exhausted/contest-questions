#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int>a(26,0);
        int a1=0,a2=0;
        for(char &c:s){
            c=tolower(c);
            a[c-'a']++;
        }
        for(int i=0;i<26;i++){
            if(a[i]>a1){
                a2=a1;
                a1=a[i];
            }else if(a[i]>a2){
                a2=a[i];
            }
        }   
        int sum=a1+a2;
        cout<<sum<<endl;



    }
    return 0;
}