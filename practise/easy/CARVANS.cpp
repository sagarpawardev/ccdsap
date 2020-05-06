//
// Created by Sagar Pawar on 07/05/20.
//

/**
Problem: CARVANS
**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/easy/test/CARVANS.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int speed;
        ll maxSpeed = 1000000000009;
        int count = 0;
        loop(i, 0, n){
            cin >> speed;
            if(speed < maxSpeed){
                maxSpeed = speed;
                count++;
            }
        }

        cout << count << "\n";
    }

    return 0;
}