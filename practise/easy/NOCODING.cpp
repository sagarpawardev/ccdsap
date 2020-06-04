//
// Created by Sagar Pawar on 05/06/20.
//

/**
 Problem: NOCODING.cpp
 
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
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/easy/test/NOCODING.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        ll n = s.length();
        ll count = 2;
        loop(i, 1, n){
            int diff;
            if(s[i-1] > s[i]){
                diff = 26 - ( s[i-1] - s[i] );
            }
            else{
                diff = s[i] - s[i-1];
            }
            count += diff;
            count ++;

            if(count > n*11)
                break;
        }

        cout << (count > n*11  ? "NO" : "YES" ) << "\n";
    }

    return 0;
}