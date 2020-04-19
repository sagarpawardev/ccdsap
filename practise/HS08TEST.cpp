//
// Created by Sagar Pawar on 19/04/20.
//

/**
  Problem: HS08TEST.cpp
  
  Algorithm:
  
  Learning:
  
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/test/HS08TEST.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int amt = 0;
    float bal = 0;
    cin >> amt;
    cin >> bal;

    if((float)amt<=(bal-0.5f) && amt%5==0){
        bal -= (float)amt;
        bal -= 0.5f;
    }

    printf("%.2f", bal);

    return 0;
}