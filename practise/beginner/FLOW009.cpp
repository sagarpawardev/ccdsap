//
// Created by Sagar Pawar on 21/04/20.
//

/**
Problem: FLOW009.cpp
  
Algorithm:
  
Learning:
  
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/biginner/test/FLOW009.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n = 0;
    cin >> n;

    while (n--) {
        double q;
        double p;
        cin >> q;
        cin >> p;

        if (q > 1000) {
            p *= 0.9;
        }

        double sum = p*q;
        printf( "%.6f\n", sum);
    }

    return 0;
}