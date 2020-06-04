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

vector<unordered_set<int>> tree;
vector<vector<int>> paths;
vector<bool> visited;

void dfs(int current, vector<int>& parentPath){

    if(visited[current])
        return;
    visited[current] = true;

    vector<int> path = vector<int>(parentPath);
    path.push_back(current);
    paths[current] = path;

    for(int i: tree[current]){
        dfs(i, path);
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

        tree = vector<unordered_set<int>>(n+1, unordered_set<int>());
        int u, v;
        loop(i, 0, n-1){
            cin >> u >> v;
            tree[u].emplace( v );
            tree[v].emplace( u );
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

            int diff = MAX_INT;

            unordered_set<int> pathValues;
            vector<int> path;
            int value;
            loop(l, j, sizeX){
                value = a[pathX[l]-1];
                if(pathValues.find(value) == pathValues.end()) {
                    path.push_back(value);
                }
                else{
                    diff = 0;
                    break;
                }
                pathValues.emplace(value);
            }

            loop(l, j, sizeY){
                value = a[pathY[l]-1];
                if(diff > 0 && pathValues.find(value) == pathValues.end()) {
                    path.push_back(value);
                }
                else{
                    diff = 0;
                    break;
                }
                pathValues.emplace(value);
            }

            path.push_back(a[pathY[j-1]-1]);

            int pSize = path.size();
            if(diff>0 && pSize <= 100) {
                // Sort
                sort(path.begin(), path.begin() + pSize);

                // Find minimum diff
                loop(l, 1, pSize) {
                    diff = min(diff, path[l] - path[l - 1]);
                }
            }
            else{
                diff = 0;
            }

            cout << diff << "\n";
        }
    }

    return 0;
}