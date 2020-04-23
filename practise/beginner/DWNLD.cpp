//
// Created by Sagar Pawar on 21/04/20.
//

/**
Problem: DWNLD.cpp

Learning:
  
**/

#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/biginner/test/DWNLD.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 0;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int time = 0;
        ll sum = 0;
        while (n--) {
            int ti, d;
            cin >> ti >> d;

            if (time + ti <= k) {}
            else if (time >= k) {
                sum += (ti * d);
            } else {
                sum += (time + ti - k) * d;
            }

            time += ti;
        }
        cout << sum << "\n";
    }

    return 0;
}