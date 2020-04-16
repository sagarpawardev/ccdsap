//
// Created by Sagar Pawar on 11/04/20.
//
#define ll long long

#include<bits/stdc++.h>

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    char *testFile = (char *)"/Users/sagarpawar/CLionProjects/ccdsap/APRIL20B/test/CARSELL.txt";
    freopen(testFile, "r", stdin);
#endif

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> price(n);
        for (int i = 0; i < n; i++) {
            cin >> price[i];
        }

        sort(price.begin(), price.begin() + n, greater<>());

        ll sum = 0;
        for (int day = 0; day < n; day++) {
            sum = (sum + max( price[day] - day, 0)) % 1000000007;
        }

        cout << sum << "\n";
    }

}