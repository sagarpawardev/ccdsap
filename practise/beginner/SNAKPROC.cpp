//
// Created by Sagar Pawar on 21/05/20.
//

/**
 Problem: SNAKPROC

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
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/beginner/test/SNAKPROC.txt";
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
        bool head = false;
        bool invalid = false;
        loop(i, 0, n){
            cin >> c;

            if(invalid || c=='.')
                continue;

            if(c=='H'){
                if(head)
                    invalid = true;
                else
                    head = true;
            }
            else if(c=='T'){
                if(!head)
                    invalid = true;
                else
                    head = false;
            }
        }

        cout << (invalid || head ? "Invalid" : "Valid") << "\n";

    }

    return 0;
}