#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long a,b,c,d;
        cin>>a>>b>>c>>d;
        int count=0;
        
        if (b > d) {
            cout << -1 << endl;
            continue;
        }

        while(b!=d){
            b++;
            a++;
            count++;
        }

        if (a < c) {
            cout << -1 << endl;
            continue;
        }
        while(a!=c){
            a--;
            count++;
        }

        cout<<count<<endl;
    }
    return 0;
}