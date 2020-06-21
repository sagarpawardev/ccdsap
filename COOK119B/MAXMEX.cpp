//
// Created by Sagar Pawar on 21/06/20.
//

/**
 Problem: MAXMEX.cpp
 
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
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/COOK119B/test/MAXMEX.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;


        vector<int> a(n);
        int c;
        loop(i, 0, n) {
            cin >> c;
            a[i] = c;
        }


        sort(a.begin(), a.end());

        int count = 0;
        int expected = 1;
        int i = 0;

        // Move till m

        for (; i < n && a[i] < m; i++) {
            if (expected == a[i] || expected - 1 == a[i]) {
                expected = a[i] + 1;
                count++;
            } else {
                break;
            }
        }


        if (expected != m) {
            cout << "-1\n";
        } else {
            // Skip m
            while (i < n && a[i] == m) i++;

            if (count == 0) {
                expected++;
                for (; i < n; i++) {
                    if (expected == a[i] || expected - 1 == a[i]) {
                        expected = a[i] + 1;
                        count++;
                    } else {
                        break;
                    }
                }
            } else {
                count += (n - i);
            }

            if (count == 0)
                count = -1;
            cout << count << "\n";
        }


    }

    return 0;
}