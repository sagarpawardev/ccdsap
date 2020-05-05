//
// Created by Sagar Pawar on 06/05/20.
//

/**
Problem: MARCHA1
    Basic recursion problem. Bruteforce

Algorithm:
    - This is a brute force solution
    - For required sum either a note is part of solution or not part of solution
    - For both the conditioin recursively call the function

Learning:
    - Dynamic programming cannot be applied here because range of sum is not given as a result we cannot create array
**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int

using namespace std;

vector<int> a;
int aSize;

bool f(ll sum, int i) {
    if (sum == 0)
        return true;

    if (i == aSize || sum < 0)
        return false;

    return f(sum, i + 1) || f(sum - a[i], i + 1);
}

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/easy/test/MARCHA1.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        ll m;
        cin >> m;

        // Input notes in wallet
        a = vector<int>(n);
        aSize = n;
        loop(i, 0, n) {
            cin >> a[i];
        }

        bool result = f(m, 0);
        cout << (result ? "Yes\n" : "No\n");
    }

    return 0;
}