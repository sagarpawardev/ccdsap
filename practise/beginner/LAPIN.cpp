//
// Created by Sagar Pawar on 26/04/20.
//

/**
Problem: LAPIN
**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/beginner/test/LAPIN.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 0;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;

        int n = str.length();
        int mid = n / 2;
        vector<int> a(26, 0);
        for (int i = 0; i < mid; i++) {
            a[str[i]-'a']++;
        }

        if(n%2==1){
            mid++;
        }

        for (int i = mid; i < n; i++) {
            a[str[i]-'a']--;
        }

        bool flag = false;
        for (int i = 0; i < 26; i++) {
            if (a[i] != 0) {
                flag = true;
                break;
            }
        }

        cout << (flag ? "NO" : "YES") << "\n";
    }

    return 0;
}