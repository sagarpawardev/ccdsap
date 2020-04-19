//
// Created by Sagar Pawar on 19/04/20.
//

/**
  Problem: INTEST

  Learning:
    Accepting huge input
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/test/INTEST.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n = 0, k=0;
    cin >> n >> k;
    int count = 0;
    while (n--) {
        int a = 0;
        cin >> a;
        if(a%k==0){
            count++;
        }
    }
    cout << count << endl;

    return 0;
}