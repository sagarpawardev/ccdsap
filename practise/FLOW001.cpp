//
// Created by Sagar Pawar on 19/04/20.
//

/**
Problem: FLOW001
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/test/FLOW001.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 0;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        cout << (a+b) << "\n";
    }

    return 0;
}