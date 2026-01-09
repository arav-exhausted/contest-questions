#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;

        int max_win_anna= a + ((c+1)/2) ;
        int max_win_katie = b+ (c/2);

        max_win_anna>max_win_katie? (cout<<"First\n"):(cout<<"Second\n");
    }
    
    return 0;
}