//
// Created by Sagar Pawar on 23/04/20.
//

/**
Problem: CHEFSTLT
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/school/test/CHEFSTLT.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 0;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;

        int n = s1.size();
        int maxDiff = 0, minDiff = 0;

        for(int i=0; i<n; i++){
            if(s1[i]=='?' || s2[i]=='?'){
                maxDiff++;
            }
            else if(s1[i] != s2[i]){
                maxDiff++;
                minDiff++;
            }
        }
        cout << minDiff << " " << maxDiff << "\n";
    }

    return 0;
}