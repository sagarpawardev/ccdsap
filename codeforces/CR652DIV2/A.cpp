//
// Created by Sagar Pawar on 23/06/20.
//

/**
 Problem: A.cpp
 
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
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/codeforces/CR652DIV2/test/a.txt";
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

        if(n%4 == 0){
            cout << "YES" << "\n";
        }
        else{
            cout << "NO" << "\n";
        }
    }

    return 0;
}