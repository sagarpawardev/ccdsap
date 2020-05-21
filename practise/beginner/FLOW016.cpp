//
// Created by Sagar Pawar on 21/05/20.
//

/**
 Problem: FLOW016

 Algorithm:
  1. Calculate GCD using Euclid's GCD algo
  2. LCM = (a * b) / GCD

 Time Complexity:
   O(log n)

 Learning:
  LCM * GCD = a * b

**/

#include <bits/stdc++.h>
#include <numeric>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int
#define MAX_INT 2147483647

using namespace std;

ll gcd(ll a, ll b){
    if(b==0)
        return a;
    return gcd(b, a%b);
}

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/beginner/test/FLOW016.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        ll a, b;
        cin >> a >> b;

        int m = min(a, b);
        a = max(a, b);
        b = m;

        ll g = gcd(a,b);
        ll lcm = a * b / g;

        cout << g << " " << lcm << "\n";
    }

    return 0;
}