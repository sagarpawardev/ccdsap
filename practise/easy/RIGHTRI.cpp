//
// Created by Sagar Pawar on 09/05/20.
//

/**
Problem: RIGHTRI
Learning:
  Computation Geometry basics
**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int

using namespace std;

ll sq(ll x) {
    return x * x;
}

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/easy/test/RIGHTRI.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    cin >> t;
    int count = 0;
    while (t--) {
        int x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

        vector<ll> arr(3);
        arr[0] = sq(y1 - y2) + sq(x1 - x2);
        arr[1] = sq(y1 - y3) + sq(x1 - x3);
        arr[2] = sq(y2 - y3) + sq(x2 - x3);
        sort(arr.begin(), arr.begin()+3);

        if( arr[2] == arr[1]+arr[0]){
            count ++;
        }

    }

    cout << count << "\n";

    return 0;
}