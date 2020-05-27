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
        int state = 0, count = 0;

        queue<int> cs, hs, es, fs;
        loop(i, 0, n)
            if (s[i] == 'C')
                cs.push(i);

        loop(i, 0, n)
            if (s[i] == 'H')
                hs.push(i);

        loop(i, 0, n)
            if (s[i] == 'E')
                es.push(i);

        loop(i, 0, n) {
            if (s[i] == 'F')
                fs.push(i);
        }

        // Iterate C
        while (!cs.empty()) {

            //Iterate H
            while (!hs.empty() && hs.front() < cs.front() )
                hs.pop();
            if (!hs.empty()) {

                // Iterate E
                while (!es.empty() && es.front() < hs.front() )
                    es.pop();

                if (!es.empty()) {

                    // Iterate F
                    while (!fs.empty() && fs.front() < es.front() )
                        fs.pop();

                    if (!fs.empty()) {
                        count++;
                        fs.pop();
                    }
                    es.pop();
                }
                hs.pop();
            }

            if()
            cs.pop();
        }

        cout << count;

    }

    return 0;
}