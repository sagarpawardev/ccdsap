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

string a, b;
int aSize, bSize;

bool look(int aIdx, int bIdx) {
    if (aIdx == aSize)
        return true;
    if (bIdx == bSize)
        return false;

    if (a[aIdx] == b[bIdx]) {
        return look(aIdx + 1, bIdx + 1);
    } else {
        return look(aIdx, bIdx + 1);
    }
}

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
        cin >> a >> b;

        if(b.size() < a.size()){
            string temp = a;
            a = b;
            b = temp;
        }

        aSize = a.size();
        bSize = b.size();

        bool success = look(0, 0);
        cout << (success ? "YES" : "NO") << "\n";
    }

    return 0;
}