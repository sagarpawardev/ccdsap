//
// Created by Sagar Pawar on 23/06/20.
//

/**
 Problem: MATBREAK.cpp
 
 Algorithm:
 
 Time Complexity:
  O(nlogn)

 Learning:
    Fast Power function works in O(n)

 Tags:
    fast-power-func

**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int

using namespace std;

ll MOD = 1e9 + 7;

ll fast_power(ll base, ll exp){
    ll res = 1;
    base = base % MOD;
    if(base==0)
        return 0;

    while(exp > 0){
        if(exp & 1)
            res = (res*base) % MOD;

        exp = exp >> 1;
        base = (base * base) % MOD;
    }

    return res;
}

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/unsolved_first_attempt/test/MATBREAK.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        ll n, a;
        cin >> n >> a;

        ll ans = 0;
        loop(i, 1, n+1) {
            ll count = 2*i - 1;

            ll pi = fast_power(a, count);

            ans = (ans + pi) % MOD;
            a = (a*pi)%MOD;
        }

        cout << ans << "\n";
    }

    return 0;
}