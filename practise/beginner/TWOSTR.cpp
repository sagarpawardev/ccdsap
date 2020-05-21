//
// Created by Sagar Pawar on 21/05/20.
//

/**
 Problem: TWOSTR

 Time Complexity: O(n)

**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int
#define MAX_INT 2147483647

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/beginner/test/TWOSTR.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;

        int n = a.size();
        string result = "Yes\n";
        if(n == b.size()){
            loop(i, 0, n){
                if(a[i]!='?' && b[i]!='?' && a[i]!=b[i]){
                    result = "No\n";
                    break;
                }
            }
        }
        else{
            result = "No\n";
        }

        cout << result;
    }

    return 0;
}