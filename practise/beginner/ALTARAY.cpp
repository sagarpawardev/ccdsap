//
// Created by Sagar Pawar on 16/05/20.
//

/**
Problem: ALTARAY

 Time Complexity: O(n)
 Space Complexity: O(n)
**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int

using namespace std;

int sign(int n){
    return n < 0 ? -1 : n > 0 ? 1 : 0;
}

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/beginner/test/ALTARAY.txt";
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

        vector<int> arr(n);
        loop(i, 0, n)
            cin >> arr[i];

        int len = 1, prev;
        prev = arr[n-1];
        arr[n-1] = 1;
        int a;

        // Iterate backwards
        for(int i=n-2; i>-1; i--){
            a = arr[i];

            // If signs are equal then reset
            if(sign(prev) == sign(a) || a==0 )
                len = 1;

            // If unequal then increment
            else
                len++;


            prev = a;
            arr[i] = len;
        }

        loop(i, 0, n)
            cout << arr[i] << " ";

        cout << "\n";
    }

    return 0;
}