//
// Created by Sagar Pawar on 25/04/20.
//

/**
Problem: JOHNY
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/easy/test/JOHNY.txt";
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

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int k;
        cin >> k;

        int count = 1;
        for (int i = 0; i < n; i++) {
            if (a[i] < a[k - 1])
                count++;
        }

        cout << count << "\n";
    }

    return 0;
}