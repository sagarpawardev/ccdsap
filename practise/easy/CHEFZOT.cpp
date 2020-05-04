//
// Created by Sagar Pawar on 04/05/20.
//

/**
Problem: CHEFZOT
**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/easy/test/CHEFZOT.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int maxLen = 0;
        int len = 0;
        int a;
        loop(i, 0, n){
            cin >> a;
            if(a>0){
                len++;
            }
            else{
                len = 0;
            }

            if(len > maxLen){
                maxLen = len;
            }
        }

        cout << maxLen << "\n";
    }

    return 0;
}