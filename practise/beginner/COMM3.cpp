//
// Created by Sagar Pawar on 23/05/20.
//

/**
 Problem: COMM3

 Time Complexity: O(n)

 Tags:
    geometry, math

**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int
#define MAX_INT 2147483647

using namespace std;

double dist(int x1, int y1, int x2, int y2) {
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/beginner/test/COMM3.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        int r;
        cin >> r;

        int cx, cy, hsx, hsy, scx, scy;
        cin >> cx >> cy >> hsx >> hsy >> scx >> scy;

        double d1 = dist(cx, cy, hsx, hsy);
        double d2 = dist(cx, cy, scx, scy);
        double d3 = dist(hsx, hsy, scx, scy);

        bool direct = d1 <= r && d2 <= r;
        bool throughHs = d1 <= r && d1 + d3 <= 2 * r;
        bool throughSc = d2 <= r && d2 + d3 <= 2 * r;
        string result = "no";
        if ( direct || throughHs || throughSc ) {
            result = "yes";
        }

        cout << result << "\n";
    }

    return 0;
}