//
// Created by Sagar Pawar on 23/06/20.
//

/**
 Problem: B.cpp
 
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
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/codeforces/CR652DIV2/test/B.txt";
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

        string s;
        cin >> s;


        int i = n-1;

        int ones = 0;
        //State 1
        for(; i>-1; i--){
            if(s[i]=='0')
                break;

            ones++;
        }

        int zeroes = 0;
        for(; i>-1; i--){
            if(s[i]=='0'){
                zeroes++;
            }
            else if(s[i]=='1'){
                zeroes = 1;
            }
        }

        string res = "";
        loop(j, 0, zeroes){
            res.append("0");
        }

        loop(j, 0, ones){
            res.append("1");
        }

        cout << res << "\n";
    }

    return 0;
}