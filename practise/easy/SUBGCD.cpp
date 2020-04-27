//
// Created by Sagar Pawar on 27/04/20.
//

/**
Problem: SUBGCD

Learning:
 If GCD of any pair is 1 all GCD of all super sets will be 1
**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int

using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/easy/test/SUBGCD.txt";
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

        int g;
        cin >> g;
        int maxLen = 0;
        loop(i, 1, n) {
            int a;
            cin >> a;
            g = gcd(g, a);
            if(g==1){
                maxLen = i+1;
            }
        }

        cout << (maxLen == 0 ? -1 : maxLen) << "\n";
    }

    return 0;
}