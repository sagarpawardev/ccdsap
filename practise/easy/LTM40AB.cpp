//
// Created by Sagar Pawar on 10/05/20.
//

/**
Problem: LTM40AB

Learning:
 If WA is coming even if you think logic is correct
 Try all possibilities in logic
**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/easy/test/LTM40AB.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        ll count = 0;
        for (int x = a; x <= b && d>x; x++) {
            count += d - max(c, x+1) + 1;
        }

        cout << count << "\n";
    }

    return 0;
}