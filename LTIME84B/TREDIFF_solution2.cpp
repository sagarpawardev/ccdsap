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
vector<vector<int>> paths;
vector<bool> visited;

void dfs(int current, vector<int>& parentPath){

    if(visited[current])
        return;
    visited[current] = true;

    vector<int> path = vector<int>(parentPath);
    path.push_back(current);
    paths[current] = path;

    int n = tree[current].size();
    loop(i, 0, n){
        dfs(tree[current][i], path);
    }
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

        paths = vector<vector<int>>(n+1, vector<int>());
        visited = vector<bool>(n+1, false);
        vector<int> emptyVector;
        dfs(n/2, emptyVector);

        //Find Path
        loop(i, 0, q){

            int x, y;
            cin >> x >> y;

            // Find Path
            vector<int> pathX = paths[x];
            vector<int> pathY = paths[y];

            int j=0;
            int sizeX = pathX.size();
            int sizeY = pathY.size();
            while(j < min(sizeX, sizeY) && pathX[j] == pathY[j]){
                j++;
            }

            vector<int> path;
            loop(l, j, sizeX){
                path.push_back(a[pathX[l]-1]);
            }

            loop(l, j, sizeY){
                path.push_back(a[pathY[l]-1]);
            }

            path.push_back(a[pathY[j-1]-1]);

            int pSize = path.size();
            // Sort
            sort(path.begin(), path.begin()+pSize);

            // Find minimum diff
            int diff = MAX_INT;
            loop(l, 1, pSize){
                diff = min( diff, path[l]-path[l-1] );
            }

            cout << diff << "\n";
        }
    }

    return 0;
}