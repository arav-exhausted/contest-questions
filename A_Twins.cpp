#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int>v(n);
    int summ=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        summ+=v[i];
    }

    sort(v.rbegin(),v.rend());
    int ans=0;
    int msum=0;
    for(int i=0;i<n;i++){
        msum+=v[i];
        ans++;
        if(msum>summ-msum) break;
    }

    cout<<ans<<endl;

    

    return 0;
}