//
// Created by Sagar Pawar on 24/04/20.
//

/**
Problem: TWONMS
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/school/test/TWONMS.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 0;
    cin >> t;
    while (t--) {
        int a, b, n;
        cin >> a >> b >> n;

        if (n % 2 == 1) {
            a = a * 2;
        }

        cout << max(a, b) / min(a, b) << "\n";
    }

    return 0;
}