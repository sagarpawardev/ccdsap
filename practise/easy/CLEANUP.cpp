//
// Created by Sagar Pawar on 06/05/20.
//

/**
Problem: CLEANUP
**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/easy/test/CLEANUP.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<bool> done(1001, false);
        loop(i, 0, m) {
            int a;
            cin >> a;
            done[a] = true;
        }

        // Check for chef task
        int task = 0;
        loop(i, 1, n + 1) {
            if (!done[i]) {
                task++;

                if (task % 2 == 1) {
                    cout << i << " ";
                }
            }
        }
        cout << "\n";

        // Check for assistant task
        task = 0;
        loop(i, 1, n + 1) {
            if (!done[i]) {
                task++;

                if (task % 2 == 0) {
                    cout << i << " ";
                }
            }
        }
        cout << "\n";
    }

    return 0;
}