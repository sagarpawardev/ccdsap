//
// Created by Sagar Pawar on 17/05/20.
//

/**
 Problem: TWTCLOSE
**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int
#define MAX_INT 2147483647

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/beginner/test/TWTCLOSE.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        string q;
        int v, open = 0;
        vector<bool> a(n+1, false);
        loop(i, 0, k){
            cin >> q;
            if(q[2] == 'I'){ // if CLICK query
                cin >> v;
                open = a[v] ? open-1 : open+1;
                a[v] = !a[v];
            }
            else{
                a = vector<bool>(n+1, false);
                open = 0;
            }

            cout << open << "\n";
        }
    }

    return 0;
}