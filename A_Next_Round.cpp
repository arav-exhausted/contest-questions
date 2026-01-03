#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k,count=0;
    cin>>n>>k;
    int arr[n];
    if(n>=k){
        for(int &c:arr){
            cin>>c;
        }   

        for(int i=0;i<n;i++){
            if(arr[i]>0){
                if(arr[i]>=arr[k-1]){
                    count++;
                }
            }
        }
    }

    cout<<count;
    return 0;
}