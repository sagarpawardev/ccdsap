//
// Created by Sagar Pawar on 23/04/20.
//

/**
Problem: PRB01.cpp
**/

#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n){
    if(n==1)
        return false;

    for(int i=2; i<=sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;

}

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/test/PRB01.txt";
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

        cout << (isPrime(n) ? "yes\n" : "no\n");
    }

    return 0;
}