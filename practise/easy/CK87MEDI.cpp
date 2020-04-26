//
// Created by Sagar Pawar on 26/04/20.
//

/**
Problem: CK87MEDI
**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/easy/test/CK87MEDI.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 0;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        loop(i, 0, n){
            cin >> a[i];
        }

        sort(a.begin(), a.begin()+n);

        int i = (n+k)/2;
        cout << a[i] << "\n";
    }

    return 0;
}