//
// Created by Sagar Pawar on 26/04/20.
//

/**
Problem: AMR15A

Learning:
 Finding mod of 10^24 i.e. mod of huge values in C/C++
**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/beginner/test/AMR15A.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    int odd = 0, even = 0;
    loop(i, 0, n) {
        int w;
        cin >> w;
        if (w % 2) {
            odd++;
        } else {
            even++;
        }
    }

    cout << (odd < even ? "READY FOR BATTLE\n" : "NOT READY\n");


    return 0;
}