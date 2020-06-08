//
// Created by Sagar Pawar on 07/06/20.
//

/**
 Problem: COVDSMPL.cpp
 
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

vector< vector<int> > a;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/JUNE20B/test/COVDSMPL.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        int n, p;
        cin >> n >> p;

        n++;

        vector< vector<int> > a(n, vector<int>(n, 0));
        int x;
        loop(i, 1, n){
            printf("1 %d %d %d %d\n", i, 0, n-1, 0);
            cin >> x;
            if(x==0)
                continue;

            loop(j, 1, n){
                printf("1 %d %d %d %d\n", i, j, i, j);

                cin >> x;

                if(x == -1){
                    exit(0);
                }
                if(x==1){
                    a[i][j] = 1;
                }
            }
        }

        cout << "2\n";
        loop(i, 1, n){
            loop(j, 1, n){
                cout << a[i][j] << " ";
            }
            cout << "\n";
        }

        cin >> x;
        if(x==-1){
            exit(0);
        }
    }

    return 0;
}