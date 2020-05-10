//
// Created by Sagar Pawar on 10/05/20.
//

/**
Problem: SUBINC

Algorithm:
  Find all possible non-decreasing sub-array
  Number of non-decreasing sub-sub-array in non-decreasing sub-array = sum of 1..n  = n*(n+1)/2

Complexity: O(n)
**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int

using namespace std;

ll sumOfN(ll n){
    return n%2==0 ? n/2 * (n+1) : (n+1)/2 * n;
}

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/school/test/SUBINC.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        ll count = 0;
        int a;
        cin >> a;
        int tCount = 1;

        // Process each element
        loop(i, 1, n){
            int next;
            cin >> next;

            // If found a decreasing element is found calculate total sub-arrays
            if(a > next){
                count += sumOfN(tCount);
                tCount = 0;
            }

            tCount ++;
            a = next;
        }

        // Calculate total sub-arrays after error is ended
        count += sumOfN(tCount);

        cout << count << "\n";
    }

    return 0;
}