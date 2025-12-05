#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int w, p, k;
        cin >> w >> p >> k;
        int stylish = 0;

        if (w <= 20 && p <= 20 && k <= (w + p) && w < k && p < k) {
            stylish += 2 * w;           // instead of looping
            stylish += 1 * (k - w);     // rest part
        } 
        else if (w > k && p > k) {
            stylish += 2 * k;
        } 
        else if (w == k || p == k) {
            stylish += 2 * w;           // you might need to clarify if it should be 2*p instead
        }

        cout << stylish << endl;
    }
    return 0;
}
