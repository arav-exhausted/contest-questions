#include <bits/stdc++.h>
using namespace std;

int main() {



    vector<int>v(2);
    for(int i=0;i<2;i++){
        cin>>v[i];

    }
    
    for(auto &c:v){

        cout<<c<<" ";
    }

    cout<<"\nsize of v is "<<v.size();

    
    return 0;
}