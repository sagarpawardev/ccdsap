//
// Created by Sagar Pawar on 25/04/20.
//

/**
Problem: FFL
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/LTIME83B/test/FFL.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 0;
    cin >> t;
    while (t--) {
        int n, s;
        cin >> n >> s;
        vector<int> c(n);
        for(int i=0; i<n; i++){
            cin >> c[i];
        }

        vector<char> type(n);
        for(int i=0; i<n; i++){
            cin >> type[i];
        }

        int left = 100 - s;
        int minD = 101;
        int minF = 101;
        for(int i=0; i<n; i++){
            if(type[i] == '0' && c[i] < minD){
                minD = c[i];
            }

            if(type[i] == '1' && c[i] < minF){
                minF = c[i];
            }
        }

        if(minD+minF > left){
            cout << "no\n";
        }
        else{
            cout << "yes\n";
        }
    }

    return 0;
}