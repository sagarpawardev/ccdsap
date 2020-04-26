//
// Created by Sagar Pawar on 26/04/20.
//

/**
Problem: COPS
**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/school/test/COPS.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 0;
    cin >> t;
    while (t--) {
        int m, x, y;
        cin >> m >> x >> y;

        vector<bool> house(101, true);
        int val;
        int dist = x * y;
        for (int i = 0; i < m; i++) {
            cin >> val;
            int a = max(1, val - dist);
            int b = min(val + dist, 100);

            for (int i = a; i < b + 1; i++) {
                house[i] = false;
            }
        }

        int sum = 0;
        for (int i = 1; i < 101; i++) {
            if (house[i])
                sum++;
        }

        cout << sum << "\n";
    }

    return 0;
}