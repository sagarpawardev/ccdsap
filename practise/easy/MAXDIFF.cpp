//
// Created by Sagar Pawar on 01/05/20.
//

/**
Problem: MAXDIFF
**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/easy/test/MAXDIFF.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 0;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        k = min(k, n-k);

        int w = 0;
        for(int i=0; i<k; i++){
            w += a[i];
        }

        for(int i=k; i<n ;i++){
            w -= a[i];
        }

        cout << w*-1 << endl;
    }

    return 0;
}