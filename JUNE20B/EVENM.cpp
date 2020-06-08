//
// Created by Sagar Pawar on 07/06/20.
//

/**
 Problem: EVENM.cpp
 
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
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/JUNE20B/test/EVENM.txt";
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

        int num = 0;
        int rows = 0;
        while(rows < n){

            loop(j, 1, n+1){
                cout << (num+j) << " ";
            }
            rows++;
            cout << "\n";
            num += n;

            if(rows == n)
                break;
            loop(j, 0, n){
                cout << (num + (n-j) ) << " ";
            }
            rows++;
            num += n;
            cout << "\n";
        }
    }

    return 0;
}