//
// Created by Sagar Pawar on 16/05/20.
//

/**
Problem: KFIB

Time Complexity: O(n)
Space Complexity: O(k)
**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define uint unsigned int
#define MAX 1000000007

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/beginner/test/KFIB.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<ll> a(k, 1);
        ll last;
        ll sum = k;

        // Keep data in circular queue of size k and find all the values
        for(int i=k+1; i<=n; i++){
            last = a[i% k];
            a[i % k] = sum;
            sum = (2 * sum - last) % MAX;
        }

        cout << a[n%k];
    }

    return 0;
}