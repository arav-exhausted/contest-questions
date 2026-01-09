#include <bits/stdc++.h>
using namespace std;

int main() {
    int t ;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        if(n==2){
            cout<<"Yes"<<endl;
            continue;
        };
        sort(a.begin(),a.end());
        int k=a[0]+a[n-1];
        int temp=0;
        bool help = true;
        for(int i=0;i<n/2;i++){
            temp=a[i]+a[n-i-1];
            if(temp!=k) help= false;
        }

        if(help==true) cout<<"Yes\n";
        else cout<<"No\n";


    }
    return 0;
}