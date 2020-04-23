//
// Created by Sagar Pawar on 23/04/20.
//

/**
Problem: FLOW007.cpp
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/biginner/test/FLOW007.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 0;
    cin >> t;
    while (t--) {
        int n = 0;
        cin >> n;

        int rev = 0;
        while(n>0){
            rev = rev*10 + (n%10);
            n /= 10;
        }

        cout << rev << "\n";
    }

    return 0;
}