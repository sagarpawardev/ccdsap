//
// Created by Sagar Pawar on 23/05/20.
//

/**
 Problem: TRICOIN

 Time Complexity: O(1)

 Tags:
    optimization, math

**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int
#define MAX_INT 2147483647

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/beginner/test/TRICOIN.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;

        n = n << 1;
        ll rt = sqrt(n);
        ll ans = rt;
        if( rt * (rt + 1) > n){
            ans = rt-1;
        }

        cout << ans << "\n";
    }

    return 0;
}