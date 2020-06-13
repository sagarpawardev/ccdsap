//
// Created by Sagar Pawar on 14/06/20.
//

/**
 Problem: TOTR.cpp
 
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

bool isSmallAlphabet(char c){
    return 'a'<=c && c<='z';
}

bool isCapAlphabet(char c){
    return 'A'<=c && c<='Z';
}

bool isAlphabet(char c){
    return isSmallAlphabet(c) || isCapAlphabet(c);
}

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/easy/test/TOTR.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) {
        int q;
        cin >> q;

        vector<int> map(26);
        char c;
        loop(i, 0, 26){
            cin >> c;
            map[i] = c-'a';
        }

        string s;
        while(q--){
            cin >> s;
            int n = s.length();
            loop(i, 0, n){
                if(isSmallAlphabet(s[i])){
                    cout << (char)('a'+map[s[i]-'a']);
                }
                else if(isCapAlphabet(s[i])){
                    cout << (char)('A'+map[s[i]-'A']);
                }
                else if(s[i]=='_'){
                    cout << " ";
                }
                else{
                    cout << s[i];
                }
            }

            cout << "\n";
        }

    }

    return 0;
}