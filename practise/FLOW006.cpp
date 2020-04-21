//
// Created by Sagar Pawar on 21/04/20.
//

/**
Problem: FLOW006.cpp
  
Algorithm:
  
Learning:
  
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/test/FLOW006.txt";
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
        int sum = 0;
        while(n>0){
            sum += n%10;
            n = n/10;
        }
        cout << sum << "\n";
    }

    return 0;
}