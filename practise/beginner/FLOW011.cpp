//
// Created by Sagar Pawar on 21/05/20.
//

/**
 Problem: FLOW011

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
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/beginner/test/FLOW011.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        double s;
        cin >> s;

        double gs;
        if(s<1500){
            gs = 2 * s;
        }
        else{
            gs = 500 + 1.98 * s;
        }

        printf("%.2f\n", gs);
    }

    return 0;
}