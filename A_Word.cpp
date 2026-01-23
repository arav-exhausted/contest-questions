#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int up=0,lo=0;
    for(char c:s){
        if(islower(c)){
            lo++;
        }
        else if(isupper(c)){
            up++;
        }
    }
    if(up>lo){
        for(char &c:s){
            c=toupper(c);
        }
    }
    else if(lo>up){
        for(char &c:s){
            c=tolower(c);
        }
    }
    else{
        for(char &c:s){
            c=tolower(c);
        }
    }
    cout<<s;
    return 0;
}