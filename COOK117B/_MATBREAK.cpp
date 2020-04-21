//
// Created by Sagar Pawar on 20/04/20.
//

/**
Problem: MATBREAK.cpp
  
Algorithm:
  
Learning:
   pow(), java Math.power() --> Incapable of handling powers of large number
   java BigInteger.multiply() -> Capable of handling large powers but very slow
  
**/

#include <bits/stdc++.h>

#define ll unsigned long long
#define MAX_VAL 100000
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/COOK117B/test/MATBREAK.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll MAX = 1000000007;

    int t = 0;
    cin >> t;
    while (t--) {
        ll n, a;
        cin >> n >> a;

        ll sum = 0;

        for (ll i = 0; i < n; i++) {
            ll factor = i + (i + 1);

            ll p = (ll)pow(a, factor) % MAX;
            sum = (sum + p) % MAX;
            a = (ll)(a * pow(a, factor)) % MAX;
        }

        cout << sum << "\n";
    }

    return 0;


}