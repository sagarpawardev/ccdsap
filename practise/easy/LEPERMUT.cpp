//
// Created by Sagar Pawar on 07/05/20.
//

/**
Problem: LEPERMUT
**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/easy/test/LEPERMUT.txt";
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

        vector<int> a(n);
        loop(i, 0, n){
            cin >> a[i];
        }

        ll inversions = 0;
        ll localInversions = 0;
        loop(i, 0, n){
            if(i<n-1 && a[i]>a[i+1])
                localInversions++;

            loop(j, i+1, n){
                if(a[i]>a[j])
                    inversions++;
            }
        }

        cout << (inversions == localInversions ? "YES" : "NO") << "\n";
    }

    return 0;
}