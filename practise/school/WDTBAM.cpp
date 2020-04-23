//
// Created by Sagar Pawar on 23/04/20.
//

/**
Problem: WDTBAM
Problem was tricky when chef answers all the questions

Learning:
 Check boundary conditions
**/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/school/test/WDTBAM.txt";
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

        string s1, s2;
        cin >> s1 >> s2;

        ll corrects = 0;
        for(int i=0; i<n ; i++){
            if(s1[i] == s2[i]){
                corrects++;
            }
        }

        ll max;
        cin >> max;
        bool considerLast = corrects==n;
        for(int i=1; i<=n ; i++){
            ll w;
            cin >> w;
            if(i<=corrects && max<w){
                max = w;
            }

            if(considerLast && i==n){
                max = w;
            }
        }

        cout << max << "\n";
    }

    return 0;
}