//
// Created by Sagar Pawar on 26/04/20.
//

/**
Problem: BRACKETS.cpp
  
Algorithm:
  
Learning:
  
**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/easy/test/BRACKETS.txt";
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
        int maxBal = 0;
        int bal = 0;
        loop(i, 0, n){
            if(s[i]=='('){
                bal++;
            }
            else{
                bal--;
            }
            maxBal = max(maxBal, bal);
        }

        loop(i, 0, maxBal){
            cout << '(';
        }

        loop(i, 0, maxBal){
            cout << ')';
        }
        cout << "\n";
    }

    return 0;
}