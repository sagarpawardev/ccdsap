//
// Created by Sagar Pawar on 23/05/20.
//

/**
 Problem: HEADBOB

 Time Complexity: O(n)

 Algorithm:
    Y N I
    0 0 1 INDIAN
    0 1 1 INDIAN
    1 0 0 NOT_INDIAN
    1 1 0 NOT_INDIAN
    0 0 0 NOT_SURE
    0 1 0 NOT_SURE
    1 0 1 NOT_SURE
    1 1 1 NOT_SURE
**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int
#define MAX_INT 2147483647

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/beginner/test/HEADBOB.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        char c;
        vector<bool> a(3, false);
        loop(i, 0, n){
            cin >> c;

            if(c=='Y')
                a[0] = true;
            else if(c=='N')
                a[1] = true;
            else
                a[2] = true;
        }

        if(!a[0] && a[2]){
            cout << "INDIAN\n";
        }
        else if(a[0] && !a[2]){
            cout << "NOT INDIAN\n";
        }
        else{
            cout << "NOT SURE\n";
        }
    }

    return 0;
}