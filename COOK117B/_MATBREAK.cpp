//
// Created by Sagar Pawar on 20/04/20.
//

/**
Problem: MATBREAK.cpp
  
Algorithm:
  
Learning:
  
**/

#include <bits/stdc++.h>

#define ll unsigned long long
#define MAX_VAL 100000
using namespace std;

ll power(int x, int n) {

    if (n == 0) {
        return 1;
    }


    int res[MAX_VAL];
    int res_size = 0;
    int temp = x;

    while (temp != 0) {
        res[res_size++] = temp % 10;
        temp = temp / 10;
    }

    for (int i = 2; i <= n; i++)
        res_size = multiply(x, res, res_size);

    string s;
    for (int i = res_size - 1; i >= 0; i--)
        s.push_back(res[i]);

    string::size_type sz = 0;
    return stoll(s, &sz, 0);
}

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

            ll p = power(a, factor) % MAX;
            sum = (sum + p) % MAX;
            a = (a * power(a, factor)) % MAX;
        }

        cout << sum << "\n";
    }

    return 0;


}