//
// Created by Sagar Pawar on 23/04/20.
//

/**
Problem: FLOW004.cpp
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/test/FLOW004.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 0;
    cin >> t;
    while (t--) {
        string n;
        cin >> n;

        int sum = (n[0]-'0') + (n[n.size()-1]-'0');

        cout << sum << "\n";

    }

    return 0;
}