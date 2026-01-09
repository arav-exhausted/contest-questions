#include <bits/stdc++.h>
using namespace std;


bool distinctnums(int n){
    unordered_set<int> s;
    while (n > 0) {
        int ld = n % 10;
        if (s.count(ld)) return false;
        s.insert(ld);
        n /= 10;
    }
    return true;
}

int insert_number(int n){
    if(distinctnums(n))
        return n;
    else 
        return insert_number(n+1);

}

int main() {
    int n;
    cin>>n;
    cout<<insert_number(n+1);
    return 0;
}