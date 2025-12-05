#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        sort(&arr[0],&arr[n-1]);
        
        for(int i=0;i<n;i++){
            if(arr[i]==x){
                if(arr[i-1]<x){
                    if(arr[i+1]>x){
                        cout<<"YES"<<endl;
                    }
                    else cout<<"NO"<<endl;
                }
                else cout<<"NO"<<endl;
                
            }
        }
    }
}
