//
// Created by Sagar Pawar on 07/05/20.
//

/**
Problem: DIVIDING.cpp
  
Algorithm:
  
Learning:
  
**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/easy/test/DIVIDING.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) {
        ll n;
        cin >> n;

        ll a;
        ll sum = 0;
        loop(i, 0, n){
            cin >> a;

            sum += a;
        }

        ll targetSum = n%2==0 ? n/2 * (n+1) : n * (n+1)/2;
        cout << ( targetSum==sum ? "YES" : "NO") << "\n";
    }

    return 0;
}