//
// Created by Sagar Pawar on 19/04/20.
//

/**
  Problem: TRISQ
  Easy problem
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/biginner/test/TRISQ.txt";
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
        n-=2;

        int i = n/2;
        cout << (i*(i+1))/2 << "\n";

    }

    return 0;
}