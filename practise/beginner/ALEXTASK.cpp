//
// Created by Sagar Pawar on 21/05/20.
//

/**
 Problem: ALEXTASK.cpp
 
 Algorithm:
    1. Find all possible LCM and choose the lowest one

 Time Complexity: O(n^2 logn)

 Tags:
 LCM, math, GCD

**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int
#define MAX_INT 9223372036854775807

using namespace std;

ll gcd (ll a, ll b){
    if(b == 0)
        return a;
    return gcd (b, a%b);
}

ll lcm(ll a, ll b){
    ll t = max(a, b);
    b = min(a,b);
    a = t;
    ll g = gcd(a, b);
    return (ll)(a*b) / g;
}

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/beginner/test/ALEXTASK.txt";
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

        vector<ll> a(n);
        loop(i, 0, n)
            cin >> a[i];

        ll mLcm = MAX_INT;
        loop(i, 0, n){
            loop(j, i+1, n){
                ll l = lcm(a[i], a[j]);
                if(l<mLcm)
                    mLcm = l;
            }
        }

        cout << mLcm << "\n";
    }

    return 0;
}