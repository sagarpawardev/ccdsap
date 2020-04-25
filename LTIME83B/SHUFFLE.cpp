//
// Created by Sagar Pawar on 25/04/20.
//

/**
Problem: SHUFFLE.cpp
  
Algorithm:
  
Learning:
  
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/LTIME83B/test/SHUFFLE.txt";
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
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        for(int i=0; i<n; i++){
            for(int j=i+k; j<n; j+=k){
                if(a[i]>a[j]){
                    int temp = a[j];
                    a[j] = a[i];
                    a[i] = temp;
                }
            }
        }

        bool breaked = false;
        for(int i=1; i<n; i++){
            if(a[i-1]>a[i]){
                breaked = true;
                break;
            }
        }

        cout << (breaked ? "no" : "yes" ) << "\n";

    }

    return 0;
}