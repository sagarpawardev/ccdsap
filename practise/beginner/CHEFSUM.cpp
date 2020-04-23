//
// Created by Sagar Pawar on 23/04/20.
//

/**
Problem: CHEFSUM.cpp

Algorithm:
 This problem can be simply solved by finding index of minimum element.
 Because sum(i) = prefixSum(i) + suffixSum(i) = a1+a2+...+an + ai
 since ai is the only variable hence we can say that minimum element will always result in minimum sum( prefix(i) + suffix(i))
**/

#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/biginner/test/CHEFSUM.txt";
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

        int min;
        cin >> min;
        int minIdx = 1;

        for(int i=2; i<=n; i++){
            int a;
            cin >> a;

            if(a < min){
                min = a;
                minIdx = i;
            }
        }

        cout << minIdx << "\n";
    }

    return 0;
}