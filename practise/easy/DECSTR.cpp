//
// Created by Sagar Pawar on 27/04/20.
//

/**
Problem: DECSTR
**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/easy/test/DECSTR.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 0;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;

        string s;
        char c = 'a';
        char a[k];
        loop(i, 0, k+1){
            if(c>'z'){
                c='a';
                i--;
            }
            s = c+s;
            c++;
        }

        cout << s << "\n" ;
    }

    return 0;
}