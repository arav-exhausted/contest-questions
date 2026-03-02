#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        string s;
        cin >> s;

        vector<int> yes;

        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                yes.push_back(a[i]);
            }
        }

        if ((int)yes.size() < k) {
            cout << -1 <<endl;
            continue;
        }

        sort(yes.begin(), yes.end());

        long long cost = 0;
        for (int i = 0; i < k; i++) {
            cost += yes[i];
        }

        cout << cost << endl;
    }
    return 0;
}