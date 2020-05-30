//
// Created by Sagar Pawar on 30/05/20.
//

/**
 Problem: TREDIFF.cpp
 
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

vector<vector<int>> tree;

vector<int> path;
vector<bool> visited;
int dfs(int current, int b){

    // Mark Visited
    if(visited[current])
        return 0;
    visited[current] = true;

    // Breaking condition
    if(current==b) {
        path.push_back(current);
        return 1;
    }

    int state = 0;

    int n = tree[current].size();
    loop(i, 0, n){
        int res = dfs(tree[current][i], b);

        // Found both in the children
        if(res == 1 && state == 1){
            return 2;
        }

        // Found one int the children
        if(res == 1 && state == 0){
            state = 1;
            path.push_back(current);
        }

        // Found both somewhere in the children
        if(res == 2)
            return 2;
    }

    return state;
}

void findPath(int a, int b){
    dfs(a, b);
}

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/LTIME84B/test/TREDIFF.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<int> a(n);
        loop(i,0, n){
            cin >> a[i];
        }

        tree = vector<vector<int>>(n+1, vector<int>());
        int u, v;
        loop(i, 0, n-1){
            cin >> u >> v;
            tree[u].push_back( v );
            tree[v].push_back( u );
        }

        //Process Queries
        loop(i, 0, q){
            path.clear();
            visited = vector<bool>(n+1);
            int x, y;
            cin >> x >> y;

            // Find Path
            findPath(x, y);

            // Convert index to value
            int pSize = path.size();
            loop(j, 0, pSize){
                path[j] = a[path[j]-1];
            }

            // Sort
            sort(path.begin(), path.begin()+pSize);

            // Find minimum diff
            int diff = MAX_INT;
            loop(j, 1, pSize){
                diff = min( diff, path[j]-path[j-1] );
            }

            cout << diff << "\n";
        }
    }

    return 0;
}