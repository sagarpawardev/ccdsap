//
// Created by Sagar Pawar on 24/05/20.
//

/**
 Problem: KTTABLE
 
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
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/beginner/test/KTTABLE.txt";
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

        vector<int> a(n), b(n);
        loop(i, 0, n)
            cin >> a[i];

        loop(i, 0, n)
            cin >> b[i];

        int count = 0;
        int startTime = 0;
        loop(i, 0, n){
            int availableTime = a[i] - startTime;
            if(availableTime >= b[i])
                count++;

            startTime = a[i];
        }

        cout << count << "\n";
    }
    return 0;
}