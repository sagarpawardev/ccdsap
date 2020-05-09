//
// Created by Sagar Pawar on 09/05/20.
//

/**
Problem: POTATOES
**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int

using namespace std;

bool isPrime(int n) {
    if (n == 1)
        return false;

    if (n == 2)
        return true;

    double sqr = sqrt(n)+1;
    loop(i, 2, sqr) {
        if (n % i == 0)
            return false;
    }

    return true;

}

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/easy/test/POTATOES.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        int sum = x + y;
        int max = sum + 2004;
        loop(i, 1, max) {
            if (isPrime(sum + i)) {
                cout << i << "\n";
                break;
            }
        }
    }

    return 0;
}