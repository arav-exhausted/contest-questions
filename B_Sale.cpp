#include <bits/stdc++.h>
using namespace std;

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=0;
    sort(a.begin(),a.end());
    int i=0;
    while(a[i]<=0&&m>0){
        ans+=a[i];
        i++;
        m--;
    }
    cout<<abs(ans)<<endl;
    return 0;
}