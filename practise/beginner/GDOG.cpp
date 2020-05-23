//
// Created by Sagar Pawar on 23/05/20.
//

/**
 Problem: GDOG

 Time Complexity: O(n)

**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int
#define MAX_INT 2147483647

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/beginner/test/GDOG.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        int m = 0;
        for (int i=2; i<=k; i++) {
            if (m < n%i)
                m = n%i;
        }

        cout << m << "\n";
    }

    return 0;
}