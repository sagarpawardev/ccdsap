//
// Created by Sagar Pawar on 05/06/20.
//

/**
 Problem: APPROX2.cpp
 
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
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/easy/test/APPROX2.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        loop(i, 0, n){
            cin >> a[i];
        }

        ll minDiff = MAX_INT, count = 1;
        loop(i, 0, n){
            loop(j, i+1, n){
                ll diff = abs(a[i]-k+a[j]);
                if( diff < minDiff ){
                    minDiff = diff;
                    count = 1;
                }
                else if(diff == minDiff){
                    count++;
                }
            }
        }

        cout << minDiff << " " << count << "\n";
    }

    return 0;
}