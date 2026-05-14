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
        vector<int>p(n);
        for(auto &c:p){
            cin>>c;
        }
        auto indexofmaximum= max_element(p.begin(),p.end());
        swap(p[indexofmaximum-p.begin()],p[0]);
        for(auto x:p) cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}