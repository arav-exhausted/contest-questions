#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int count=0;
    while(n--){
        int p,q;
        cin>>p>>q;
        if(q-p>=2){
            count++;
        }
        
    }

    cout<<count<<endl;
    return 0;
}