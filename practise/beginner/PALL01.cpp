//
// Created by Sagar Pawar on 23/04/20.
//

/**
Problem: PALL01
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/beginner/test/PALL01.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 0;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        int n = s.size();

        bool palindrome = true;
        for( int i=0; i < n-1-i ; i++){
            if(s[i] != s[n-1-i]){
                palindrome = false;
                break;
            }
        }

        cout << (palindrome ? "wins" : "losses") << "\n";
    }

    return 0;
}