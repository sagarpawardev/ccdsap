//
// Created by Sagar Pawar on 04/05/20.
//

/**
Problem: STONES
**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/easy/test/STONES.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;

        vector<bool> j(256, false);
        int aSize = a.size();
        loop(i, 0, aSize){
            j[a[i]-1] = true;
        }

        int bSize = b.size();
        int count = 0;
        loop(i, 0, bSize){
            if(j[b[i]-1]) {
                count++;
            }
        }

        cout << count << "\n";

    }

    return 0;
}