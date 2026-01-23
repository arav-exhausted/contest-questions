#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>a(n);
        vector<int>b(m);

        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin>>b[i];
        }

        sort(b.begin(),b.end());

        int sum=0;
        for(int i=0;i<n;i++){
            sum+=lower_bound(b.begin(),b.end(),a[i])-b.begin();
        }


        cout<<sum<<endl;





        
    }
    return 0;
}