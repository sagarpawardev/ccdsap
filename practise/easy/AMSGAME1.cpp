//
// Created by Sagar Pawar on 27/04/20.
//

/**
Problem: AMSGAME1

Learning:
 Problem provides different view of GCD
**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int

using namespace std;

int gcd(int a, int b){
    if(b == 0)
        return a;
    else
        return gcd(b, a%b);
}

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/easy/test/AMSGAME1.txt";
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

        int a;
        cin >> a;
        loop(i, 1, n){
            int b;
            cin >> b;
            int t = min(a, b);
            a = max(a, b);
            b = t;
            a = gcd(a, b);
        }

        cout << a << "\n";
    }

    return 0;
}