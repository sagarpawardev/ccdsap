//
// Created by Sagar Pawar on 23/05/20.
//

/**
 Problem: TTENIS
 
 Algorithm:
 
 Time Complexity: O(n)

**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int
#define MAX_INT 2147483647

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/beginner/test/TTENIS.txt";
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

        int n = s.size();
        int chef = 0;
        bool deuce = false;
        int i=1;
        for( ; i<n+1; i++ ){
            if(s[i-1] == '1')
                chef++;

            if(chef>10){
                cout << "WIN\n";
                break;
            }
            else if(i-chef>10){
                cout << "LOSE\n";
                break;
            }
            else if(chef==10 && i-chef==10){
                deuce = true;
                break;
            }
        }

        if(deuce){
            i++;
            for( ;i<n+1; i++){
                if(s[i-1]=='1')
                    chef++;

                int diff = chef - (i-chef);
                if(diff > 1){
                    cout << "WIN\n";
                    break;
                }
                else if( diff < -1 ) {
                    cout << "LOSE\n";
                    break;
                }
            }
        }

    }

    return 0;
}