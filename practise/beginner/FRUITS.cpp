//
// Created by Sagar Pawar on 23/04/20.
//

/**
Problem: FRUITS.cpp
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/biginner/test/FRUITS.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 0;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        int diff = abs(n-m);
        cout << max(diff-k, 0) << "\n";
    }

    return 0;
}