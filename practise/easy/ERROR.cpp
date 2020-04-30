//
// Created by Sagar Pawar on 30/04/20.
//

/**
Problem: ERROR
**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/easy/test/ERROR.txt";
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

        int n = s.size();
        string ans = "Bad\n";
        loop(i, 0, n-2){
            if(s[i] == '0' && s[i+1] == '1' && s[i+2]=='0'){
                ans = "Good\n";
                break;
            }
            else if(s[i]=='1' && s[i+1]=='0' && s[i+2]=='1'){
                ans = "Good\n";
                break;
            }
        }

        cout << ans;
    }

    return 0;
}