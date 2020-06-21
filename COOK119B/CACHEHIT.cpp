//
// Created by Sagar Pawar on 21/06/20.
//

/**
 Problem: CACHEHIT.cpp
 
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
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/COOK119B/test/CACHEHIT.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        int n, b, m;
        cin >> n >> b >> m;

        ll count = 0;
        int prev = -1;
        int c;
        loop(i, 0, m){
            cin >> c;

            int block = 0;
            if(b > 0) {
                block = c / b;
            }
            else{
                prev = -1;
            }

            if(prev!=block){
                count++;
                prev = block;
            }
        }

        cout << count << "\n";

    }

    return 0;
}