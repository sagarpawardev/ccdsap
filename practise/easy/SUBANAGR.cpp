//
// Created by Sagar Pawar on 07/05/20.
//

/**
Problem: SUBANAGR
**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int

using namespace std;

int aSize, bSize;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/easy/test/SUBANAGR.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string a;
    int t = 1;
    //cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cin >> a;

        vector<int> freqA(26, 0);
        aSize = a.size();
        loop(i, 0, aSize) {
            freqA[a[i] - 'a']++;
        }

        loop(i, 1, n) {
            string b;
            cin >> b;
            bSize = b.size();
            vector<int> freqB(26, 0);
            loop(j, 0, bSize) {
                freqB[b[j] - 'a']++;
            }

            loop(j, 0, 26) {
                freqA[j] = min(freqA[j], freqB[j]);
            }
        }

        bool found = false;
        loop(i, 0, 26) {
            while (freqA[i]-- > 0) {
                found = true;
                cout << (char)(i + 'a');
            }
        }

        if(!found){
            cout << "no such string";
        }
    }

    return 0;
}