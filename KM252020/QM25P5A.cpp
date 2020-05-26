//
// Created by Sagar Pawar on 26/05/20.
//

/**
 Problem: QM25P5A.cpp
 
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
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/KM252020/test/QM25P5A.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) {
        int n;
        cin >> n;

        string s = "";
        while(n>0){
            s += to_string(n%2);
            n = n >> 1;
        }

        int sSize = s.size();
        int i= 0 ;
        while(i<sSize && s[i]=='0')
            i++;

        int num = 0;
        while(i<sSize){
            int c = s[i]-'0';
            num = ( num << 1 ) + c;
            i++;
        }

        cout << num;

    }

    return 0;
}