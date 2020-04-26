//
// Created by Sagar Pawar on 26/04/20.
//

/**
Problem: MATPAN
**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/easy/test/MATPAN.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 0;
    cin >> t;
    while (t--) {
        vector<int> price(26);
        loop(i, 0, 26){
            cin >> price[i];
        }

        string s;
        cin >> s;

        // mark all alphabets as unavailable
        vector<bool> a(26, false);

        // Iterate string and mark char as available
        int n = s.size();
        loop(i, 0, n){
            a[ s[i]-'a' ] = true;
        }

        // add const of unavailable elements in the sum
        ll sum = 0;
        loop(i, 0, 26){
            if( !a[i] )
                sum+=price[i];
        }

        cout << sum << "\n";
    }

    return 0;
}