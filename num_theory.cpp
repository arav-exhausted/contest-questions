#include <bits/stdc++.h>
using namespace std;

const int maxN = 1e7+3;
bool checkprime1(int n){
    int count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0) count++;
    }
    if(count<=2) return true;
    else return false;

}

bool checkprime2(int n){
    bool check=true;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) check=false;
    }
    if(check) return true;
    else return false;
}


bool checkprime3(int n){
    //every prime number can be written in the form 6k+1 or 6k-1

    if(n<=1) return false;
    if(n<=3) return true;
    if(n%2==0 || n%3==0) return false;
    
    for(int i=6;i*i<=n;i+=6){
        if(n%(i+1)==0 || n%(i-1)==0) return false ;

    }

    return true;
}

bool sieve_of_erathosthenes(int n){
    //for a number n>1, its multiples are not prime
    vector<bool>v(maxN,true);
    v[0]=false;
    v[1]=false;

    for(int i=2;i*i<maxN;i++){
        if(v[i]){
            for(int j = i*i; j<maxN;j+=i){
                v[j]=false;
            }
        }
    }

    return v[n];

}
int euclid_algo(int a,int b){
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    bool ans=sieve_of_erathosthenes(n);
    if(ans) cout<<"YES";
    else cout<<"NO";
    return 0;
}