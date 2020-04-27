//
// Created by Sagar Pawar on 27/04/20.
//

/**
Problem: ROWCOLOP

Algorithm:
 Well explained here https://discuss.codechef.com/t/rowcolop-editorial/1607

Learning:
 Matrix row and column operation. Finding max sum if row and column addition is performed
**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/easy/test/ROWCOLOP.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    while (t--) {
        int n, oper;
        cin >> n >> oper;

        vector<int> ri(n, 0);
        vector<int> ci(n, 0);

        loop(i, 0, oper){
            string s;
            cin >> s;

            int v, x;
            cin >> v >> x;

            if(s[0]=='R')
                ri[v] += x;
            else
                ci[v] += x;
        }

        ll maxRow = 0;
        loop(i, 0, n){
            if(maxRow < ri[i])
                maxRow = ri[i];
        }

        ll maxCol = 0;
        loop(i, 0, n){
            if(maxCol < ci[i])
                maxCol = ci[i];
        }
        cout << (maxRow+maxCol) << '\n';
    }

    return 0;
}