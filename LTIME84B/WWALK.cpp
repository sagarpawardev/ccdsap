//
// Created by Sagar Pawar on 30/05/20.
//

/**
 Problem: WWALK.cpp
 
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
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/LTIME84B/test/WWALK.txt";
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

        vector<int> a(n), b(n);
        loop(i,0, n){
            cin >> a[i];
        }

        loop(i, 0, n){
            cin >> b[i];
        }

        ll wd = 0;
        ll distA = 0, distB = 0;
        loop(i, 0, n){
            if(distA == distB && a[i] == b[i]){
                wd += a[i];
            }

            distA += a[i];
            distB += b[i];
        }

        cout << wd << "\n";
    }

    return 0;
}