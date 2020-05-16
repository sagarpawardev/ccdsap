//
// Created by Sagar Pawar on 17/05/20.
//

/**
Problem: RESQ
**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int
#define MAX_INT 2147483647

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/easy/test/RESQ.txt";
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

        double rt = sqrt(n);
        int minDiff = n-1;
        for(int i=2; i<=rt; i++){
            if(n%i == 0){
                int diff = (n/i) - i;
                minDiff = min(minDiff, diff);
            }
        }

        cout << minDiff << "\n";
    }

    return 0;
}