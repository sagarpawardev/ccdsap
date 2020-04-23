//
// Created by Sagar Pawar on 23/04/20.
//

/**
Problem: LUCKFOUR.cpp
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/school/test/LUCKFOUR.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 0;
    cin >> t;
    while (t--) {
        string n;
        cin >> n;

        int nSize = n.size();
        int count = 0;
        for(int i=0; i<nSize; i++){
            if(n[i]=='4')
                count++;
        }

        cout << count << "\n";
    }

    return 0;
}