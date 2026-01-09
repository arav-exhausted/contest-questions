#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){

        int n,x;
        cin>>n>>x;

        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        int l=v[0];


        for(int i =1;i<n;i++){
            l= max(l,v[i]-v[i-1]);
        }

        l=max(l,2*(x-v[n-1]));

        cout<<l<<endl;


    }   
    return 0;
}