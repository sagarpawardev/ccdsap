//
// Created by Sagar Pawar on 25/04/20.
//

/**
Problem: CIELAB.cpp
  
Algorithm:
  
Learning:
  
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/easy/test/CIELAB.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a, b;
    cin >> a >> b;

    int c = a - b;
    string s = to_string(c);
    if (s[0] != '9') {
        s[0] = '9';
    } else {
        s[0] = '1';
    }
    cout << s;
    return 0;
}