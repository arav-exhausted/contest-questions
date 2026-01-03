#include <bits/stdc++.h>
using namespace std;

int main(){
   
        long long n,m,a;
        cin>>n>>m>>a;

        long long req = (n+a-1)/a;
        long long req1 = (m+a-1)/a;
        cout<< req * req1;
        
        
    
    return 0;
}