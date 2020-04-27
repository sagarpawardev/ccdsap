//
// Created by Sagar Pawar on 27/04/20.
//

/**
Problem: CSUB
**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/easy/test/CSUB.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 0;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        ll count = 0;
        loop(i, 0, n) {
            char c;
            cin >> c;

            if (c == '1') count++;
        }

        ll ans = (count * (count + 1)) / 2;
        cout << ans << "\n";
    }

    return 0;
}