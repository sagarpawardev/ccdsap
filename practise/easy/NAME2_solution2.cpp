//
// Created by Sagar Pawar on 30/04/20.
//

/**
Problem: NAME2

Basic Recursion Problem
**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/easy/test/NAME2.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 0;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;

        // Keep greater size element in b and smaller element in a
        if (b.size() < a.size()) {
            string temp = a;
            a = b;
            b = temp;
        }

        int aSize = a.size(), bSize = b.size();

        int i = 0, j;
        for(j=0; i<aSize && j<bSize; j++)
            if (a[i] == b[j])
                i++;

        bool success = i==aSize;

        cout << (success ? "YES" : "NO") << "\n";
    }

    return 0;
}