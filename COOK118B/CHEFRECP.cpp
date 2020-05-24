//
// Created by Sagar Pawar on 24/05/20.
//

/**
 Problem: CHEFRECP.cpp
 
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
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/COOK118B/test/CHEFRECP.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        unordered_map<int, int> map;

        int prev, a;
        cin >> prev;
        int count = 1;
        bool breaked = false;
        loop(i, 1, n){
            cin >> a;
            if(!breaked && prev!=a){
                if(map.find(a) == map.end()){
                    map.insert(make_pair(prev, count));
                    prev = a;
                    count = 1;
                } else{
                    breaked = true;
                }
            }
            else{
                count++;
            }
        }
        map.insert(make_pair(prev, count));

        if(!breaked) {
            unordered_set<int> set;
            for (auto p : map) {
                if(set.find(p.second) == set.end()){
                    set.insert(p.second);
                }
                else{
                    breaked = true;
                    break;
                }
            }
        }

        cout << (breaked ? "NO" : "YES") << "\n";
    }

    return 0;
}