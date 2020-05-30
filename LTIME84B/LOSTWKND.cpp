//
// Created by Sagar Pawar on 30/05/20.
//

/**
 Problem: LOSTWKND.cpp
 
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
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/LTIME84B/test/LOSTWKND.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        int sum = 0;
        loop(i, 0, 5){
            cin >> n;
            sum += n;
        }

        int p;
        cin >> p;

        sum = sum * p;

        if( ((float)sum / 5) <= 24 ){
            cout << "No";
        }
        else{
            cout << "Yes";
        }
        cout << "\n";

    }

    return 0;
}