#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--){
        int n;
        cin>>n;
        int arr[n];

        for(int i=0;i<n;i++){
            int d,t;
            cin>>d>>t;
            int a=d/t;
            arr[i]=a; 
        }
        int max=arr[0];
        for(int i=0;i<n;i++){
            if(arr[i]>max){
                max=arr[i];
            }
        }

        for(int i=0;i<n;i++){
            if(arr[i]==max){
                cout<<i+1<<endl;
                break;
            }
        }

        
        

    }

}
