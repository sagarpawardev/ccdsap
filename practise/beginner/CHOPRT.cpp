//
// Created by Sagar Pawar on 21/04/20.
//

/**
Problem: CHOPRT.cpp
  
Algorithm:
  
Learning:
  
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/biginner/test/CHOPRT.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 0;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        if(a>b){
            cout << ">\n";
        }
        else if(b>a){
            cout << "<\n";
        }
        else{
            cout << "=\n";
        }
    }

    return 0;
}