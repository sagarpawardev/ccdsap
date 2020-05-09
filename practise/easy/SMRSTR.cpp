//
// Created by Sagar Pawar on 10/05/20.
//

/**
Problem: SMRSTR.cpp

Learning:
 Floor function property
 Floor( Floor(x/m)/n ) = Floor( x/(m*n) )
**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/easy/test/SMRSTR.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;

        int d;
        ll product = 1;
        loop(i, 0, n){
            cin >> d;
            product *= d;
        }

        int x;
        loop(i, 0, q){
            cin >> x;
            if(product)
                cout << x/product << " ";
            else
                cout << "0 ";
        }

        cout << "\n";
    }

    return 0;
}