#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int n;
    cin>>n;
    int arr[n];
    double sum=0;
    double ans=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }

    ans =sum/n;

    printf("%.12f",ans);

    


    
    return 0;
}