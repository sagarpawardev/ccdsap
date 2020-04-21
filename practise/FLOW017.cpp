//
// Created by Sagar Pawar on 21/04/20.
//

/**
Problem: FLOW017.cpp
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/test/FLOW017.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 0;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int r;
        if(a>b && a>c){
            r = max(b,c);
        }
        else if(b>a && b>c){
            r = max(a,c);
        }
        else{
            r = max(a, b);
        }
        cout << r << "\n";
    }

    return 0;
}