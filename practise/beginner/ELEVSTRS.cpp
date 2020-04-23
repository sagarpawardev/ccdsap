//
// Created by Sagar Pawar on 23/04/20.
//

/**
Problem: ELEVSTRS
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/beginner/test/ELEVSTRS.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 0;
    cin >> t;
    while (t--) {
        int n, v1, v2;
        cin >> n >> v1 >> v2;

        float t1 = (float)(n*sqrt(2))/(float)v1;
        float t2 = (float)(n*2)/(float)v2;
        if(t1<t2){
            cout << "Stairs\n";
        }
        else{
            cout << "Elevator\n";
        }
    }

    return 0;
}