//
// Created by Sagar Pawar on 23/04/20.
//

/**
Problem: ICPC16A
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/others/test/ICPC16A.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 0;
    cin >> t;
    while (t--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        if(x1==x2){
            if(y2 > y1){
                cout << "up\n";
            }
            else{
                cout << "down\n";
            }
        }
        else if(y1==y2){
            if(x2 > x1){
                cout << "right\n";
            }
            else{
                cout << "left\n";
            }
        }
        else{
            cout << "sad\n";
        }
    }

    return 0;
}