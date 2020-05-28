//
// Created by Sagar Pawar on 28/05/20.
//

/**
 Problem: RAINBOWA

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
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/beginner/test/RAINBOWA.txt";
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

        vector<int> a(n);
        loop(i, 0, n)
            cin >> a[i];

        bool wrong = false;

        int prev = 0;
        loop(i, 0, (n+1)/2){
            if( a[i]!=a[n-i-1] || (a[i]!=prev+1 && a[i]!=prev)) {
                wrong = true;
                break;
            }
            prev = a[i];
        }

        if(a[n/2]!=7)
            wrong = true;

        cout << (wrong ? "no" : "yes") << "\n";
    }

    return 0;
}