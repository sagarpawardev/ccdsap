//
// Created by Sagar Pawar on 07/06/20.
//

/**
 Problem: EOEO.cpp
 
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
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/JUNE20B/test/EOEO.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        ll ts;
        cin >> ts;


        while (ts % 2 == 0) {
            ts = ts >> 1;
        }

        cout << ts / 2 << "\n";

    }

    return 0;
}