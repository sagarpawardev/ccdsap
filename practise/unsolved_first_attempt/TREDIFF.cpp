//
// Created by Sagar Pawar on 13/06/20.
//

/**
 Problem: TREDIFF.cpp
 
 Algorithm:
 
 Time Complexity:
  
 Learning:
    1. Tree is a graph without cycles
    2. In a tree assume any node as root, with dfs this helps in locating direction by using levels
    3. A tree can be stored using
        a. level[], parent[], root
        b. node{ value, child[] }, root
        c. adjacency list, root
        d. adjacency matrix, root
 Tags:
    easy-medium

**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int
#define MAX_INT 2147483647

using namespace std;

vector<vector<int>> tree;
vector<int> level, parent;

void dfs(int current) {
    level[current] = level[parent[current]] + 1;
    for (int node: tree[current]) {
        if (node != parent[current]) {
            parent[node] = current;
            dfs(node);
        }
    }
}

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/unsolved_first_attempt/test/TREDIFF.txt";
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

        n++;
        // Input value
        vector<int> value(n);
        loop(i, 1, n) {
            cin >> value[i];
        }

        // Input tree
        tree = vector<vector<int>>(n, vector<int>());
        int u, v;
        loop(i, 1, n - 1) {
            cin >> u >> v;
            tree[u].push_back(v);
            tree[v].push_back(u);
        }

        // Find levels using dfs
        level = vector<int>(n);
        parent = vector<int>(n);
        parent[1] = 1;
        level[1] = 0;
        dfs(1);

        // Answer queries
        loop(i, 0, q) {
            int a, b;
            cin >> a >> b;

            // Apply LCA
            if (level[a] < level[b])
                swap(a, b);

            int count = 0;
            vector<int> path;
            while (level[a] > level[b] && count < 101) {
                path.push_back(value[a]);
                count++;

                a = parent[a];
            }

            while (a != b && count < 101) {
                path.push_back(value[a]);
                path.push_back(value[b]);
                count += 2;

                a = parent[a];
                b = parent[b];
            }

            path.push_back(value[a]);
            count++;

            // Find minimum
            if (count > 100) {
                cout << "0\n";
            } else {
                sort(path.begin(), path.begin() + count);
                int ans = MAX_INT;
                loop(j, 1, count) {
                    ans = min(ans, path[j] - path[j - 1]);
                }
                cout << ans << "\n";
            }
        }

    }

    return 0;
}