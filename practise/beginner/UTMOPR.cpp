//
// Created by Sagar Pawar on 23/05/20.
//

/**
 Problem: UTMOPR.cpp
 
 Example:
 5  7   13  26  52  104
 4  7   12  24  48  96  192
 
 Time Complexity: O(n)

**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int
#define MAX_INT 2147483647

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/beginner/test/UTMOPR.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        int a;
        int sum = 0;
        loop(i, 0, n){
            cin >> a;
            sum = (sum + a) % 2;
        }

        if(sum==0 && k < 2)
            cout << "odd\n";
        else
            cout << "even\n";
    }

    return 0;
}