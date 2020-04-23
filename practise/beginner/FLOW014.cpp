//
// Created by Sagar Pawar on 23/04/20.
//

/**
Problem: FLOW014.cpp
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/beginner/test/FLOW014.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int q = 0;
    cin >> q;
    while (q--) {
        int h, t;
        float c;
        cin >> h;
        cin >> c;
        cin >> t;

        bool cond1 = h > 50;
        bool cond2 = c < .7;
        bool cond3 = t > 5600;

        if (cond1 && cond2 && cond3)
            cout << "10\n";
        else if (cond1 && cond2)
            cout << "9\n";
        else if (cond2 && cond3)
            cout << "8\n";
        else if (cond1 && cond3)
            cout << "7\n";
        else if (cond1 || cond2 || cond3)
            cout << "6\n";
        else
            cout << "5\n";


    }

    return 0;
}