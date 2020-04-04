//
// Created by Sagar Pawar on 04/04/20.
//
/**
 * Problem : CAPIMOVE
 *
 * Algorithm :
 * 1. Keep Population in sorted order
 * 2. create a adjacency matrix
 * 3. for each village
 *      start assuming each village as capital with population descending
 *      mark capital as answer if not adjacent to current infected village
 *
 * Complexity: O( nlogn + n^2 ) = O(nlogn)
 *
 */

#include<bits/stdc++.h>

using namespace std;

bool comparePopulation(pair<int, int>& p1, pair<int, int>& p2){
    return p1.second > p2.second;
}

int main(){

    /*char* testfile = "/Users/sagarpawar/CLionProjects/ccdsap/heaps/test/CAPIMOVE.txt";
    freopen(testfile, "r+", stdin);*/

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<pair<int, int>> populations;
        for(int i=0; i<n; i++){
            int p;
            cin >> p;

            populations.emplace_back(make_pair(i, p));
        }
        sort(populations.begin(), populations.end(), comparePopulation);

        vector< vector<bool> > path(n, vector<bool>(n, false));
        for(int i=0; i<n; i++){
            path[i][i] = true;
        }

        for(int i=1; i<n; i++){
            int u, v;
            cin >> u >> v;

            path[u-1][v-1] = true;
            path[v-1][u-1] = true;
        }

        for(int i=0; i<n; i++){
            bool found = false;
            for(int j=0; j<n; j++){
                int k = populations[j].first;
                if(!path[i][k]){
                    cout << k+1 << " ";
                    found = true;
                    break;
                }
            }
            if(!found)
                cout << 0 << " ";
        }
        cout << endl;
    }

}
