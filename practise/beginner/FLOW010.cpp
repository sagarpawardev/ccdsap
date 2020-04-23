//
// Created by Sagar Pawar on 23/04/20.
//

/**
Problem: FLOW010.cpp
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/biginner/test/FLOW010.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 0;
    cin >> t;
    while (t--) {
        char c;
        cin >> c;
        switch(c){
            case 'B':
            case 'b': cout << "BattleShip\n"; break;
            case 'C':
            case 'c': cout << "Cruiser\n"; break;
            case 'D':
            case 'd': cout << "Destroyer\n"; break;
            case 'F':
            case 'f': cout << "Frigate\n"; break;
        }
    }

    return 0;
}