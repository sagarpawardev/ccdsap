//
// Created by Sagar Pawar on 21/05/20.
//

/**
 Problem: SEBIHWY

 Time Complexity: O(1)

**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int
#define MAX_INT 2147483647

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/beginner/test/SEBIHWY.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        int s, sg, fg, d, t;
        cin >> s >> sg >> fg >> d >> t;

        double speedDiff = (double)(d * 180) / t;
        double speed = s + speedDiff;

        double err1 = abs(sg-speed);
        double err2 = abs(fg-speed);
        if(err1 < err2){
            cout << "SEBI";
        }
        else if(err1 > err2){
            cout << "FATHER";
        }
        else{
            cout << "DRAW";
        }

        cout << "\n";
    }

    return 0;
}