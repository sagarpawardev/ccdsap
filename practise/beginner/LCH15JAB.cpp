//
// Created by Sagar Pawar on 23/05/20.
//

/**
 Problem: LCH15JAB
 
 Algorithm:
    1. Count each character
    2. Check if count of any character equals to n-count

 Time Complexity: O(n)

**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int
#define MAX_INT 2147483647

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/beginner/test/LCH15JAB.txt";
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

        int n = s.size();
        vector<int> a(26, 0);
        loop(i, 0, n){
            a[s[i]-'a']++;
        }

        string result = "NO";
        loop(i, 0, 26){
            if(a[i] == n-a[i]){
                result = "YES";
                break;
            }
        }

        cout << result << "\n";
    }

    return 0;
}