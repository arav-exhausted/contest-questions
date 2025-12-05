#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n;
    cin>>t;
    
    while(t--){
        cin>>n;
        string s;//binary string = [0,1,1,0,1] 
        cin>>s;
        int freq = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                freq++;
            }
            else if (s[i]=='1'){
                break;
            }
        }

        cout<<freq<<endl;
    }

    return 0;
}