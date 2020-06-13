//
// Created by Sagar Pawar on 13/06/20.
//

/**
 Problem: BUYING2.cpp
 
 Algorithm:
 
 Time Complexity:
  
 Learning:
 
 Tags:
 

**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int
#define MAX_INT 2147483647

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/easy/test/BUYING2.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        int  n,x;
        cin >> n >> x;

        ll sum = 0;
        int a;
        int min = INT_MAX;
        loop(i, 0, n){
            cin >> a;

            sum += a;
            if(a<min)
                min = a;
        }

        ll r = sum % x;
        if( min <= r ){
            cout << "-1\n";
        }
        else{
            cout << sum/x << "\n";
        }
    }

    return 0;
}