//
// Created by Sagar Pawar on 27/05/20.
//

/**
 Problem: CHRL2.cpp
 
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
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/beginner/test/CHRL2.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) {
        string s;
        cin >> s;

        int n = s.size();
        int count = 0;

        for(int i=0; i<n; i++){
            if(s[i]=='C') {
                for (int j = i + 1; j < n; j++) {
                    if (s[j] == 'H') {
                        for (int k = j + 1; k < n; k++) {
                            if (s[k] == 'E') {
                                for (int l = k + 1; l < n; l++) {
                                    if (s[l] == 'F') {
                                        count++;
                                        s[l] = 'A';
                                        break;
                                    }
                                }
                                s[k] = 'A';
                                break;
                            }
                        }
                        s[j] = 'A';
                        break;
                    }
                }
            }
        }

        cout << count;

    }

    return 0;
}