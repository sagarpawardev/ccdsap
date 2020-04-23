//
// Created by Sagar Pawar on 21/04/20.
//

/**
Problem: FLOW005.txt.cpp
  
Algorithm:
  
Learning:
  
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/biginner/test/FLOW005.txt";
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

        int a[] = {100, 50, 10, 5, 2};
        int sum = 0;
        for(int i: a){
            int b = n%i;
            sum += (n-b)/i;
            n = b;
        }
        sum += n;
        cout << sum << "\n";
    }

    return 0;
}