//
// Created by Sagar Pawar on 25/04/20.
//

/**
Problem: CHEFAPAR
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/school/test/CHEFAPAR.txt";
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

        int fine = 0;
        int maintenance = 0;
        for (int i = 0; i < n; i++) {
            char r;
            cin >> r;
            if (r == '0') {
                fine++;
                maintenance += 1000;
            } else if (maintenance > 999) {
                fine++;
            }
        }

        cout << (maintenance + fine * 100) << "\n";
    }

    return 0;
}