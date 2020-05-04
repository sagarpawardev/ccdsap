//
// Created by Sagar Pawar on 04/05/20.
//

/**
Problem: NUKES
**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/easy/test/NUKES.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) {
        int a, n, k;
        cin >> a >> n >> k;

        n++;
        for(int i=0; i<k; i++){
            cout << a%n << " ";
            a /= n;
        }
    }

    return 0;
}