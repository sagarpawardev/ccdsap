//
// Created by Sagar Pawar on 07/06/20.
//

/**
 Problem: PRICECON.cpp
 
 Algorithm:
 
 Time Complexity:
  
 Learning:
 
 Tags:
 

**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int
#define MAX_INT 2147483647

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/JUNE20B/test/PRICECON.txt";
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

        ll sum = 0;
        int a, ta;
        loop(i, 0, n){
            cin >> a;

            ta = min(a, k);
            sum += (a - ta);
        }

        cout << sum << "\n";
    }

    return 0;
}