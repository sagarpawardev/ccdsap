//
// Created by Sagar Pawar on 19/04/20.
//

/**
Problem: FCTRL
 Number of zeroes at the end is formed by 2*5 so always no of 2's always >= no of 5's.
 Hence count number of 5's in n! is the answer.

Learning:
    Legendre's formula for calculating max value of x in p^x such that p^x divides n!
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/biginner/test/FCTRL.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 0;
    cin >> t;
    while (t--) {
        //Code here
        int n;
        cin >> n;
        int count = 0;
        int i = 5;
        while(i<=n){
            count += n/i;
            i *= 5;
        }
        cout << count << "\n";
    }

    return 0;
}