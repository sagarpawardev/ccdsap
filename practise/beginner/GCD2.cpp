//
// Created by Sagar Pawar on 26/04/20.
//

/**
Problem: GCD2
**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int

using namespace std;

int gcd(int a, int b) {
    if(b == 0)
        return a;
    else
        return gcd(b, a%b);
}

int mod(vector<int> a, int b) {
    int n = a.size();
    int rem = 0;
    loop(i, 0, n){
         rem = (10*rem + a[i]) % b;
    }

    return rem;
}

string gcd(string a, int b) {
    if (b == 0)
        return a;
    else {
        int n = a.size();
        vector<int> arr(n, -1);
        loop(i, 0, n){
            arr[i] = a[i]-'0';
        }
        int sm = mod(arr, b);
        return to_string(gcd(b, sm));
    }
}

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/beginner/test/GCD2.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 0;
    cin >> t;
    while (t--) {
        int b;
        cin >> b;

        string a;
        cin >> a;

        cout << gcd(a, b) << "\n";
    }

    return 0;
}