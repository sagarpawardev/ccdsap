//
// Created by Sagar Pawar on 24/05/20.
//

/**
 Problem: COLOR.cpp
 
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
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/beginner/test/COLOR.txt";
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

        int r=0, g=0, b=0;
        char c;
        loop(i, 0, n){
            cin >> c;
            switch (c){
                case 'R': r++; break;
                case 'G': g++; break;
                case 'B': b++; break;
            }
        }

        int ans = n - max(r, max(g,b));
        cout << ans << "\n";
    }

    return 0;
}