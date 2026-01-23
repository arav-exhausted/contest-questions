#include <bits/stdc++.h>
using namespace std;


#define ll long long

int main() {
	
	ll t;
	cin>>t;
	
	while(t--){
        ll n,a,b;
        cin>>n>>a>>b;
        vector<int>v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        bool jacket=false;
        int count=0;
        for(ll i=0;i<n;i++){
            if(v[i]<a){
               if(jacket==false){
                count++;
                jacket=true;
               }
            }else if(v[i]>b){
                jacket=false;
            }
        }

        cout<<count<<endl;


	}
	
	
	
	

}
