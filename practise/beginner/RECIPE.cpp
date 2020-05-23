//
// Created by Sagar Pawar on 23/05/20.
//

/**
 Problem: RECIPE.cpp
 
 Algorithm:
 
 Time Complexity:
  
 Learning:
 
 Tags:
 

**/

#include <bits/stdc++.h>
#include <numeric>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int
#define MAX_INT 2147483647

using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/beginner/test/RECIPE.txt";
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

        vector<int> a(n);
        loop(i, 0, n) {
            cin >> a[i];
        }

        int g = a[0];
        loop(i, 1, n){
            g = gcd(max(g, a[i]), min(g, a[i]));
        }

        loop(i, 0, n){
            cout << a[i]/g << " ";
        }
        cout << "\n";
    }

    return 0;
}