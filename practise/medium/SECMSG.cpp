//
// Created by Sagar Pawar on 20/06/20.
//

/**
 Problem: SECMSG.cpp
 
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

bool isNum(char s){
    return '0'<=s && s<='9';
}

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/medium/test/SECMSG.txt";
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

        vector<int> dash(n+1, 0);
        loop(i, 1, n+1){
            dash[i] = dash[i-1];
            if(s[i-1]=='-'){
                dash[i]++;
            }
        }

        bool won = true;
        bool pairExists = false;
        loop(i, 0, n){
            if(isNum(s[i])) {
                int a = s[i] - '0';
                loop(j, i + 1, n) {
                    if(isNum(s[j])){
                        int b = s[j] - '0';
                        if(a+b==11 && dash[j+1]-dash[i]!=3){
                            won = false;
                            goto outer;
                        }
                        else if(a+b==11 && dash[j+1]-dash[i]==3){
                            pairExists = true;
                        }
                    }
                }
            }
        }

        outer: cout << (pairExists && won ? "YES" : "NO" ) << "\n";
    }

    return 0;
}