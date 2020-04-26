//
// Created by Sagar Pawar on 26/04/20.
//

/**
Problem: XENTASK
**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/beginner/test/XENTASK.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 0;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        ll time1 = 0;
        ll time2 = 0;

        loop(i, 0, n){
            ll x;
            cin >> x;
            if(i%2)
                time1 += x;
            else
                time2 += x;
        }

        loop(i, 0, n){
            ll y;
            cin >> y;
            if(i%2)
                time2 += y;
            else
                time1 += y;
        }

        cout << min(time1, time2) << "\n";
    }

    return 0;
}