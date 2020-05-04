//
// Created by Sagar Pawar on 02/05/20.
//

/**
Problem: COVID19
**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define MAX 100000009
#define ui unsigned int

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/MAY20B/test/COVID19.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 0;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        stack< pair<int, int> > stk;
        loop(i, 0, n)
            cin >> a[i];

        sort(a.begin(), a.end());

        int minInfected = MAX, maxInfected = 1;

        int infected = 1;
        int parent = 0;

        stk.push(make_pair(parent, infected));
        loop(i, 1, n){
            int diff = a[i]-a[i-1];
            if(diff < 3){
                infected++;
            }
            else{
                infected = 1;
                parent = i;
            }

            if(infected > maxInfected){
                maxInfected = infected;
            }

            pair<int, int> top = stk.top();
            if(top.first == parent){
                stk.pop();

                top.second = infected;
                stk.push(top);
            }
            else{
                stk.push(make_pair(parent, infected));
            }
        }

        while(!stk.empty()){
            pair<int, int> top = stk.top();
            stk.pop();

            if(top.second < minInfected){
                minInfected = top.second;
            }
        }

        cout << minInfected << " " << maxInfected << "\n";
    }

    return 0;
}