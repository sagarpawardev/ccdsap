//
// Created by Sagar Pawar on 26/04/20.
//

/**
Problem: HORSES
**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/easy/test/HORSES.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 0;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        loop(i, 0, n) {
            cin >> a[i];
        }

        int nearest = 1000000001;
        loop(i, 0, n) {
            loop(j, i+1, n) {
                int diff = abs(a[i]-a[j]);
                if( diff < nearest ){
                    nearest = diff;
                }
            }
        }
        cout << nearest << "\n";
    }

    return 0;
}