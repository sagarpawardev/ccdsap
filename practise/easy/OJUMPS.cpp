//
// Created by Sagar Pawar on 14/06/20.
//

/**
 Problem: OJUMPS.cpp
 
 Algorithm:
 
 Time Complexity:
  
 Learning:
 
 Tags:
 

**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int
#define MAX_INT 2147483647

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/easy/test/OJUMPS.txt";
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

        n = n%6;

        if(n==0 || n==1 || n==3 ) {
            cout << "yes\n";
        }
        else{
            cout << "no\n";
        }

    }

    return 0;
}