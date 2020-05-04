//
// Created by Sagar Pawar on 02/05/20.
//

/**
Problem: CORUS
**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/MAY20B/test/CORUS.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 0;
    cin >> t;
    while (t--) {
        //Code here
        int n, q;
        cin >> n >> q;

        vector<int> count(26, 0);
        loop(i, 0, n) {
            char c;
            cin >> c;

            count[c - 'a']++;
        }

        loop(i, 0, q) {
            int centers;
            cin >> centers;

            ll queueSize = 0;
            loop(j, 0, 26) {
                queueSize = queueSize + max(count[j] - centers, 0);
            }

            cout << queueSize << "\n";
        }
    }

    return 0;
}