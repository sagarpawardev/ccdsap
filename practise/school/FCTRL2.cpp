//
// Created by Sagar Pawar on 24/04/20.
//

/**
Problem: FCTRL2

Algorithm:
 Nicely explained here
 https://blog.codechef.com/2009/07/02/tutorial-for-small-factorials/

Learning:
 Finding 100! i.e. huge factorial values in C/C++
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/school/test/FCTRL2.txt";
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

        int a[200];
        int m = 0;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            a[n - i - 1] = s[i] - '0';
            m++;
        }

        n = stoi(s);
        for (int i = 2; i < n; i++) {
            int rem = 0;
            for (int j = 0; j < m; j++) {
                int mul = a[j] * i + rem;
                int val = mul % 10;
                rem = mul / 10;
                a[j] = val;
            }

            while(rem > 0){
                a[m++] = rem % 10;
                rem = rem/10;
            }
        }

        for(int i=0; i<m; i++){
            cout << a[m-i-1];
        }

        cout << "\n";
    }

    return 0;
}