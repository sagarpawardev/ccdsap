//
// Created by Sagar Pawar on 09/05/20.
//

/**
Problem: SMPAIR
**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/easy/test/SMPAIR.txt";
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

        vector<int> a(3, 1000000009);
        cin >> a[0];
        cin >> a[1];
        sort(a.begin(), a.begin()+3);
        loop(i, 2, n){
            cin >> a[2];
            sort(a.begin(), a.begin()+3);
        }

        cout << a[0]+a[1] << "\n";
    }

    return 0;
}