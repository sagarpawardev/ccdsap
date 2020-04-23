//
// Created by Sagar Pawar on 23/04/20.
//

/**
Problem: MOVIEWKN.cpp
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/school/test/MOVIEWKN.txt";
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

        vector<int> l(n);
        vector<int> r(n);
        for (int i = 0; i < n; i++) {
            cin >> l[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> r[i];
        }

        int maxLr = l[0] * r[0];
        int maxIdx = 0;
        for (int i = 1; i < n; i++) {
            int lr = l[i] * r[i];
            if (lr > maxLr) {
                maxLr = lr;
                maxIdx = i;
            } else if (lr == maxLr && r[i] > r[maxIdx]) {
                maxIdx = i;
            }
        }

        cout << (maxIdx+1) << "\n";
    }

    return 0;
}