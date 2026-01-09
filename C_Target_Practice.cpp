#include <bits/stdc++.h>
using namespace std;




int main() {
    long long t;
    cin>>t;
    while(t--){
        vector<string>s(10);

        for(int i=0;i<10;i++){
            cin>>s[i];
        }
        long long sum=0;

        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                if(s[i][j]=='X'){
                    int ans= min({i+1,j+1,10-i,10-j});
                    sum+= ans;
                }
            }
        }


        cout<<sum<<endl;
    }
    return 0;
}