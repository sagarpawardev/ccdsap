//
// Created by Sagar Pawar on 17/05/20.
//

/**
 Problem: SEAVOTE
**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int
#define MAX_INT 2147483647

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/medium/test/SEAVOTE.txt";
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

        int sum = 0, j= 0, a;
        loop(i, 0, n){
            cin >> a;
            sum+=a;
            if(a<1){
                j++;
            }
        }
        n -= j;
        if(sum>=100 && sum-n<100)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}