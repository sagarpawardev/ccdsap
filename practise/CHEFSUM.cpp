//
// Created by Sagar Pawar on 23/04/20.
//

/**
Problem: CHEFSUM.cpp

Learning:
 This problem can be simply solved by finding index of minimum element.
 Because sum(i) = prefixSum(i) + suffixSum(i) = a1+a2+...+an + ai
 since ai is the only variable hence we can say that minimum element will always result in minimum sum( prefix(i) + suffix(i))
**/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/test/CHEFSUM.txt";
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
        vector<ll> prefixSum(n);

        ll sum = 0;
        for(int i=0; i<n; i++){
            cin >> a[i];
            sum += a[i];
            prefixSum[i] = sum;
        }

        int minIdx = 0;
        ll min = (ll)10000000000000 * 100000;
        sum = 0;
        for(int i=n-1; i>-1; i--){
            sum += a[i];
            if( sum+prefixSum[i] <= min ){
                min = sum + prefixSum[i];
                minIdx = i;
            }
        }

        cout << (minIdx+1) << "\n";
    }

    return 0;
}