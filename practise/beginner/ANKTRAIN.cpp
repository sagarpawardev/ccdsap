//
// Created by Sagar Pawar on 24/05/20.
//

/**
 Problem: ANKTRAIN

 Time Complexity: O(1)

 Tags:
    math

**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int
#define MAX_INT 2147483647

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/beginner/test/ANKTRAIN.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    vector<int> partnerNumber = {4, 5, 6, 1, 2, 3, 8, 7};
    vector<string> partnerBirth = {"LB", "MB", "UB", "LB", "MB", "UB", "SU", "SL", "SU"};

    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        n--;
        int r = n%8;
        cout << (8*(n/8)+partnerNumber[r]) << partnerBirth[r] << "\n";
    }

    return 0;
}