//To do the code of binary search tree and some basic lower and upper bound 

#include<bits/stdc++.h>
using namespace std;


// basixc what is binary search, it is just a boolian command jo btata hai ki koi element present hai kya ek array me and this works on a sorted array


bool binary_search(vector<int>&v,int k,int low,int high){
    if(low>high) return false;
    int mid = (low+high)/2;
    if(v[mid]==k) return true;
    if(k<v[mid]){
        return binary_search(v,k,low,mid-1);
    }
    else{
        return binary_search(v,k,mid+1,high);
    }
}


int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &c:v){
        cin>>c;
    }
    int k;
    cout<<"Input the no you want to search for in the array: ";
    cin>>k;
    if(binary_search(v,k,0,n-1)) cout<<"Yes\n";
    else cout<<"No\n";
}

