//
// Created by Sagar Pawar on 13/06/20.
//

/**
 Problem: PRIME1.cpp
 
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
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/easy/test/PRIME1.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        int m, n;
        cin >> m >> n;

        for(int i=m; i<n+1; i++){
            if(i==1){
                continue;
            }

            int srt = sqrt(i);
            int j;
            for(j=2; j<=srt; j++){
                if(i%j == 0){
                    break;
                }
            }

            if(j>srt){
                cout << i << "\n";
            }
        }

        cout << "\n";
    }

    return 0;
}