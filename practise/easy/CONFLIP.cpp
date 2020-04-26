//
// Created by Sagar Pawar on 26/04/20.
//

/**
Problem: CONFLIP
**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/easy/test/CONFLIP.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 0;
    cin >> t;
    while (t--) {
        int g=0;
        cin >> g;
        while(g--){
            int i, n, q;
            cin >> i >> n >> q;

            if(n%2==0 || i==q){
                cout << n/2 << "\n";
            }
            else{
                cout << n/2 + 1 << "\n";
            }
        }
    }

    return 0;
}