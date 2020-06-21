//
// Created by Sagar Pawar on 21/06/20.
//

/**
 Problem: PERCAPTA.cpp
 
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

vector<unordered_set<int>> paths;
vector<bool> visited;
double maxGdp;

queue<int> bfsq;
vector<int> res;
void bfs(){
    res = vector<int>();

    while(!bfsq.empty()){
        int i = bfsq.front();
        bfsq.pop();
        res.emplace_back(i);

        for( int elem: paths[i]){
            if(!visited[elem]){
                visited[elem] = true;
                bfsq.push(elem);
            }
        }
    }
}

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/COOK119B/test/PERCAPTA.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        maxGdp = 0;
        unordered_set<int> set;

        vector<int> a(n+1), b(n+1);
        visited = vector<bool>(n+1, false);
        loop(i, 0, n){
            cin >> a[i+1];
        }

        loop(i, 0, n){
            cin >> b[i+1];

            double gdp = (double)a[i+1]/b[i+1];
            if(gdp > maxGdp){
                maxGdp = gdp ;
                set.clear();
            }

            if(gdp == maxGdp){
                set.insert(i + 1);
            }
        }

        paths = vector<unordered_set<int>>(n + 1, unordered_set<int>());
        int u, v;
        loop(i, 0, m){
            cin >> u >> v;

            if(set.find(u)!=set.end() && set.find(v)!=set.end()){
                paths[u].insert(v);
                paths[v].insert(u);
            }
        }

        vector<int> ans;
        for(int province: set){
            if(!visited[province]){
                bfsq = queue<int>();
                bfsq.push(province);
                visited[province] = true;

                bfs();
                if(res.size() > ans.size()){
                    ans = res;
                }
            }
        }

        //sort(ans.begin(), ans.end());

        cout << ans.size() << "\n";
        for(int elem: ans){
            cout << elem << " ";
        }

        cout << "\n";

    }

    return 0;
}