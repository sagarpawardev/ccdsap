//
// Created by Sagar Pawar on 18/04/20.
//
/**
 * Problem: DISHOWN
 *
 * Basic Logic:
 * Use a disjoint set to keep the record of groups initially assigning leader as itself
 * if query type = 1 -> merge the two groups and assign leader with max value
 * if query type = 2 -> show the leader of the group
 *
 * Time Complexity: O(q*n)
 *
 * Learning:
 * 1. Basic disjoint set application
 */
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void merge(vector<int>& leader, int aIdx, int bIdx){
    leader[bIdx] = leader[aIdx];
}

int leader(vector<int>& parent, int aIdx){
    int i = aIdx;
    while( parent[i] != i){
        i = parent[i];
    }
    parent[aIdx] = i ;
    return i;
}

int main(){
#ifndef ONLINE_JUDGE
    char * testFile = (char*) "/Users/sagarpawar/CLionProjects/ccdsap/disjoint set union/test/DISHOWN.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t=0;
    cin >> t;
    while(t--){
        int n=0;
        cin >> n;

        vector<int> s(n, 0);
        vector<int> ds(n, 0);
        for(int i=0; i<n; i++){
            ds[i] = i;
            cin >> s[i];
        }

        int q=0;
        cin >> q;
        while(q--){
            int type;
            cin >> type;
            if(type==0){
                int x=0, y=0;
                cin >> x >> y;
                int leaderX = leader(ds, x-1);
                int leaderY = leader(ds, y-1);
                if(leaderX == leaderY){
                    cout << "Invalid query!\n";
                }
                else{
                    if(s[leaderX] > s[leaderY]){
                        merge(ds, leaderX, leaderY);
                    }
                    else if(s[leaderX] < s[leaderY]){
                        merge(ds, leaderY, leaderX);
                    }
                }
            }
            else{
                int x=0;
                cin >> x;
                int leaderX = leader(ds, x-1);
                cout << leaderX+1 << "\n";
            }
        }
    }
    return 0;
}