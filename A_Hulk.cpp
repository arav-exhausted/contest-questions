#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string odd=" I hate";
    string even=" I love";
    string s=" that";
    string c = "I hate that";

    if(n==1) { 
        cout<<"I hate it";
        return 0;
    }

    for(int i=2;i<=n;i++){
        if(i%2!=0){
            c=c+odd;
        }
        else if(i%2==0){
            c=c+even;
        }

        if(i!=n) c+=s;
    }
    cout << c + " it";

    return 0;
}