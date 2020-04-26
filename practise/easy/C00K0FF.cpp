//
// Created by Sagar Pawar on 26/04/20.
//

/**
Problem: C00K0FF
**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/easy/test/C00K0FF.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 0;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int cakewalk = 0, simple = 0, easy = 0, easyMedium = 0, medium = 0, mediumHard = 0, hard = 0;
        loop(i, 0, n) {
            string s;
            cin >> s;

            if (s == "cakewalk") cakewalk++;
            else if (s == "simple") simple++;
            else if (s == "easy") easy++;
            else if (s == "easy-medium") easyMedium++;
            else if (s == "medium") medium++;
            else if (s == "medium-hard") mediumHard++;
            else hard++;
        }

        if (cakewalk > 0 && simple > 0 && easy > 0 && (easyMedium > 0 || medium > 0) && (mediumHard > 0 || hard > 0)) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}