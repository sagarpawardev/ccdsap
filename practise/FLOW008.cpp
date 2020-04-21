//
// Created by Sagar Pawar on 21/04/20.
//

/**
Problem: FLOW008.cpp
  
Algorithm:
  
Learning:
  
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/test/FLOW008.txt";
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

        if(n<10){
            cout << "What an obedient servant you are!\n";
        }
        else{
            cout << "-1 \n";
        }

    }

    return 0;
}