//
// Created by Sagar Pawar on 23/04/20.
//

/**
Problem: FLOW013.cpp
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/beginner/test/FLOW013.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 0;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        cout << (a+b+c == 180 ? "YES" : "NO") << "\n";
    }

    return 0;
}