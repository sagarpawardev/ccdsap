//
// Created by Sagar Pawar on 23/04/20.
//

/**
Problem: TICKETS5.cpp
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/beginner/test/TICKETS5.txt";
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

        string result = "YES";
        if (s[0] != s[1]) {
            int n = s.size();
            for (int i = 2; i < n; i++) {
                char c = i%2==0 ? s[0] : s[1];
                if(c != s[i]){
                    result = "NO";
                    break;
                }
            }
        }
        else{
            result = "NO";
        }

        cout << result << "\n";
    }

    return 0;
}