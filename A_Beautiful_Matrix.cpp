#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
        }
    }
    int ldist,rdist;

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(arr[i][j]==1){
                ldist= abs(2 - j);
                rdist= abs(2 - i);
            }
        }
    }


    int ans= rdist+ldist;
    cout<<ans<<endl;



    

    
    return 0;
}