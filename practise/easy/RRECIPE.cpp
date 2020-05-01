//
// Created by Sagar Pawar on 01/05/20.
//

/**
Problem: RRECIPE

Learning:
 Steps to debug:
 1. Read problem again if information is missing
 2. Check boundary conditions
 3. Generate new test cases
 3. Check logic

**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int
#define MOD 10000009

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/easy/test/RRECIPE.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 0;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        ll count = 1;
        int n = s.size();
        loop(i, 0, (n+1)/2){
            int l = i, r=n-i-1;
            if(s[l]=='?' || s[r]=='?'){
                if(s[l]=='?' && s[r]=='?')
                    count = (count*26)%MOD;
            }
            else if(s[l]!=s[r]){
                count = -1;
                break;
            }
        }

        if(count==-1)
            count = 0;

        cout << count << "\n";
    }

    return 0;
}