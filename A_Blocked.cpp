#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (auto &c : a) cin >> c;

        bool found = false;

        sort(a.begin(),a.end());
        for(int i=1;i<n;i++){
            if(a[i]==a[i-1]){
                found = true;
                break;
            }
        }

        if(found) cout<< -1 << endl;
        else{
            sort(a.rbegin(),a.rend());
            for(auto c:a) cout<<c<<" ";
            cout<<endl;
        }
    }
    return 0;
}
