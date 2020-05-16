//
// Created by Sagar Pawar on 16/05/20.
//

/**
Problem: APPROX.
**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/easy/test/APPROX.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        //Code here
        int k, dividend=103993, divisor = 33102, remainder;
        cin >> k;

        remainder = dividend % divisor;
        string ans = "3.";
        loop(i, 0, k){
            dividend = remainder * 10;
            remainder = dividend % divisor;
            ans.append(to_string(dividend / divisor));
        }
        if(k>0)
            cout << ans << "\n";
        else
            cout << "3\n";
    }

    return 0;
}