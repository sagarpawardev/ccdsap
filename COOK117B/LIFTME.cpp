//
// Created by Sagar Pawar on 20/04/20.
//

/**
Problem: LIFTME.cpp
  
Algorithm:
  
Learning:
  
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/COOK117B/test/LIFTME.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 0;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;

        long long floors = 0;
        int prev = 0;
        for(int i=0; i<q; i++){
            int f, d;
            cin >> f >> d;

            floors += (long long)abs(f-prev) + (long long)abs(f-d);

            prev = d;
        }

        cout << floors << "\n";
    }

    return 0;
}