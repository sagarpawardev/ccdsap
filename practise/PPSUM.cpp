//
// Created by Sagar Pawar on 23/04/20.
//

/**
Problem: PPSUM.cpp
**/

#include <bits/stdc++.h>

using namespace std;

int sum(int d, int n){
    if(d==0){
        return n;
    }

    int a = sum(d-1, n);

    return a*(a+1)/2;
}

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/test/PPSUM.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 0;
    cin >> t;
    while (t--) {
        int d, n;
        cin >> d >> n;

        int a = sum(d, n);
        cout << a << "\n";
    }

    return 0;
}