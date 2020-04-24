//
// Created by Sagar Pawar on 25/04/20.
//

/**
Problem: LONGSEQ.cpp
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/school/test/LONGSEQ.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 0;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        int c1 = 0;
        int c0 = 0;
        for(int i=0; i<n; i++){
            if(s[i]=='0')
                c0++;
            else
                c1++;
        }


        if( c0==1 || c1==1 ){
            cout << "Yes\n";
        }
        else{
            cout << "No\n";
        }

    }

    return 0;
}