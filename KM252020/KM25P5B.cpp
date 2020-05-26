//
// Created by Sagar Pawar on 26/05/20.
//

/**
 Problem: KM25P5B
 
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
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/KM252020/test/KM25P5B.txt";
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

        vector<string> names(n);
        loop(i, 0, n)
            cin >> names[i];

        vector<vector<int>> a(n, vector<int>(n));
        loop(i, 0, n){
            loop(j, 0, n){
                cin >> a[i][j];
            }
        }

        vector<int> path;
        vector<bool> visited(n, false);

        int i=0;
        visited[i] = true;
        path.emplace_back(i);
        while(true){
            int j;
            for(j=0; j<n; j++){
                if(a[i][j]==1 && !visited[j]){
                    visited[j] = true;
                    path.emplace_back(j);
                    i = j;
                    break;
                }
            }

            if(j==n)
                break;
        }

        int sSize = path.size();
        loop(i, 0, sSize){
            cout << names[path[i]];
        }

    }

    return 0;
}