//
// Created by Sagar Pawar on 26/04/20.
//

/**
Problem: LECANDY
**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/easy/test/LECANDY.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 0;
    cin >> t;
    while (t--) {
        int n;
        long c;
        cin >> n;
        cin >> c;

        int temp;
        long sum = 0;
        for(int i=0; i<n; i++){
            cin >> temp;
            sum += temp;
        }

        cout << (sum > c ? "No\n" : "Yes\n" );
    }

    return 0;
}