//
// Created by Sagar Pawar on 24/05/20.
//

/**
 Problem: RECTSQ
 
 Time Complexity: o(log n)
  
 Learning:
    Proper usage of GCD

 Tags:
    math, gcd

**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int
#define MAX_INT 2147483647

using namespace std;

ll gcd(ll a, ll b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/beginner/test/RECTSQ.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        ll n, m;
        cin >> n >> m;

        ll g = gcd(max(n, m), min(n, m));

        cout << (n * m) / (g * g) << "\n";
    }

    return 0;
}