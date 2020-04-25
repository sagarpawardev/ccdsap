//
// Created by Sagar Pawar on 25/04/20.
//

/**
Problem: MEXUM.cpp
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "test_file_path";
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

        unordered_set<int> lookup;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];

            lookup.insert(a[i]);
        }

        sort(a.begin(), a.begin()+n);

        vector<int> ans(n);
        int max = 1;
        for(int i=0; i<n; i++){
            if(a[i]!=)
        }


    }

    return 0;
}