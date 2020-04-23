//
// Created by Sagar Pawar on 21/04/20.
//

/**
Problem: TLG.cpp

Learning:
  Read question carefully. Don't assume the question/
**/

#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/biginner/test/TLG.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll n = 0;
    cin >> n;
    ll p1Max = 0;
    ll p2Max = 0;
    ll p1Score = 0;
    ll p2Score = 0;
    while (n--) {
        ll t, s;
        cin >> t >> s;
        p1Score += t;
        p2Score += s;

        ll lead = abs(p1Score-p2Score);
        if(p1Score > p2Score ){
            p1Max = max(lead, p1Max);
        }
        else{
            p2Max = max(lead, p2Max);
        }
    }

    if(p1Max > p2Max){
        cout << "1 " << p1Max << "\n";
    }
    else{
        cout << "2 " << p2Max << "\n";
    }

    return 0;
}