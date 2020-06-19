//
// Created by Sagar Pawar on 18/06/20.
//

/**
 Problem: CHEFSHIP
 
 Algorithm:
    1. Pre compute string hash
    2. Compare rolling string hash

 Time Complexity:
  O(n)

 Learning:
    - String hashing function
    - Division is not valid on modular arithmatic

 Tags:
    string-hashing

**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int
#define MAX_INT 2147483647

using namespace std;

int p = 31;
int m = 1e9 + 7;

vector<int> strHash;
vector<ll> pPow;

void computeHash(string &str, int n) {
    strHash = vector<int>(n);
    pPow = vector<ll>(n);
    strHash[0] = str[0] - 'a' + 1;
    pPow[0] = 1;
    loop(i, 1, n) {
        pPow[i] = (pPow[i - 1] * p) % m;
        strHash[i] = (strHash[i - 1] + ((str[i] - 'a' + 1) * pPow[i]) % m ) % m;
    }
}

ll getHash(int i, int size) {
    int j = i + size - 1;
    if (i == 0) {
        return strHash[j];
    }

    return ( strHash[j] - strHash[i - 1] + m) % m ;
}


int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/easy/test/CHEFSHIP.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        int n = s.length();
        int count = 0;

        if (n % 2 == 0 && n > 3) {

            computeHash(s, n);
            for (int size = 1; size < n / 2; size++) {
                ll a1 = (getHash(0, size) * pPow[size]) % m;
                ll a2 = getHash(size, size);

                if (a1 != a2)
                    continue;

                int sSize = (n - (2 * size)) / 2;
                ll b1 = ( getHash(2 * size, sSize) * pPow[n - sSize - 2*size] ) % m;
                ll b2 = getHash(n - sSize, sSize);

                if (b1 == b2)
                    count++;
            }

        }

        cout << count << "\n";
    }

    return 0;
}