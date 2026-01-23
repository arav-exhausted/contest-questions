#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here


    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }


        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[a[i]]++;
        }

        int ans=0;

        int maax=INT_MIN;

        for(auto &c:mp){
            if(c.second>maax){
                maax=c.second;
                ans=c.first;
            }
        }

        cout<<ans<<endl;


        
    }
}

