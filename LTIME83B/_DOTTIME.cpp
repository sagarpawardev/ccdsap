//
// Created by Sagar Pawar on 25/04/20.
//

/**
Problem: DOTTIME
**/

#include <bits/stdc++.h>

#define MAX 998244353
#define ll long long
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/LTIME83B/test/DOTTIME.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 0;
    cin >> t;
    while (t--) {
        int n, m, q;
        cin >> n >> m >> q;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        while (q--) {
            int pos, val;
            cin >> pos >> val;

            a[pos - 1] = val;

            ll sum = 0;
            vector<vector<ll>> cache(n+1, vector<ll>(n+1, -1));
            for (int i = 0; i < n - m + 1; i++) {
                for (int j = 0; j < n - m + 1; j++) {
                    for (int k = 0; k < m; k++) {
                        if(cache[i+k][j+k] == -1){
                            cache[i+k][j+k] = ((ll)a[i + k] * (ll)a[j + k]) % MAX;
                        }
                        sum = (sum + cache[i+k][j+k]) % MAX;
                    }
                }
            }

            cout << sum << "\n";
        }

    }

    return 0;
}