//
// Created by Sagar Pawar on 24/05/20.
//

/**
 Problem: CHEFKEY
 
 Time Complexity: O( √n )

 Tags:
    math, optimization

**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int
#define MAX_INT 2147483647

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/beginner/test/CHEFKEY.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        ll n, m, c;
        cin >> n >> m >> c;

        ll count = 0;
        if (c <= n * m) {

            // Try all i starting from 1 to root(n) and check if number fits in the screen n*m
            ll rt = sqrt(c), i = 1;
            for (; i <= rt; i++) {
                if (i <= n && c % i == 0 && c / i <= m)
                    count++;
                if (i <= m && c % i == 0 && c / i <= n)
                    count++;
            }

            // If there perfect root is one of the solution than above condition counts it twice
            // So remove that count
            i--;
            if(i*i == c && i<=n && i<=m )
                count --;
        }

        cout << count << "\n";
    }

    return 0;
}