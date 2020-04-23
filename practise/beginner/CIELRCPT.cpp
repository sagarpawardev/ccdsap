//
// Created by Sagar Pawar on 21/04/20.
//

/**
Problem: CIELRCPT.cpp

**/

#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/biginner/test/CIELRCPT.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 0;
    cin >> t;
    while (t--) {
        int count = 0;
        int mi = 2048;
        int p;
        cin >> p;

        while(p>0){
            count += (p/mi);
            p %= mi;
            mi = mi >> 1;
        }

        cout << count << "\n";
    }

    return 0;
}