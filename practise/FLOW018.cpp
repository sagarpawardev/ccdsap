//
// Created by Sagar Pawar on 23/04/20.
//

/**
Problem: FLOW018.cpp
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/test/FLOW018.txt";
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

        long long fact = 1;
        for(int i=2; i<=n; i++){
            fact *= i;
        }

        cout << fact << "\n";
    }

    return 0;
}