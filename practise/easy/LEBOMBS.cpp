//
// Created by Sagar Pawar on 17/06/20.
//

/**
 Problem: LEBOMBS.cpp
 
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
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/easy/test/LEBOMBS.txt";
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

        vector<bool> a(n, false);
        char c;
        loop(i, 0, n){
            cin >> c;
            if(c == '1'){
                if(0<i) {
                    a[i-1] = true;
                }
                a[i] = true;
                if(i<n-1){
                    a[i+1] = true;
                }
            }
        }

        int count = 0;
        loop(i, 0, n){
            if(!a[i]){
                count++;
            }
        }

        cout << count << "\n";
    }

    return 0;
}