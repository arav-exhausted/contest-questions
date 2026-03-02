#include <bits/stdc++.h>
using namespace std;
void find(vector<int> &s){
    s[0]=s[0]*2;
    sort(s.begin(),s.end());
}
int main(){
    

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int ans=0;
    sort(v.begin(),v.end());
    while(true){
        int an=v[v.size()-1];
        if(v[0]==v[v.size()-1]){
            ans=0;
            break;
        }
        else{
            find(v);
        }
        if(v[0]*2>=an){
           
          ans=an-v[0]; 
           break;
        }
        
    }
      cout<<ans<<endl;  
        
    }
    return 0;
}