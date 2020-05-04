//
// Created by Sagar Pawar on 02/05/20.
//

/**
Problem: TRPLSRT
**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int

using namespace std;

int getToken(multimap<int, int>& position, int val){
    auto it = position.find(val);

    if(it == position.end())
        return -1;

    position.erase(it);
    return it->second;
}

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/MAY20B/test/TRPLSRT.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 0;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        loop(i, 0, n)cin >> a[i];

        vector<int> aSorted(a);
        sort(aSorted.begin(), aSorted.end());
        multimap<int, int> position;
        loop(i, 0, n) {
            position.insert(make_pair(aSorted[i], i));
        }

        vector<vector<int>> steps;
        int i = 0;
        while (i < n && k > 0) {
            if (aSorted[i] == a[i]) {
                getToken(position, a[i]);
                i++;
                continue;
            }

            int x = getToken(position, a[i]);
            int y = getToken(position, a[x]);
            int z = getToken(position, a[y]);

            //Two elements are forming cycle
            if(z==-1){
                int l = x + 1;
                while (l < n && (aSorted[l] == a[l] || y == z)) {
                    l++;
                }

                z = l;
            }

            //Things are repetitive or messy
            if (z >= n) {
                break;
            }

            // Cyclic right shift
            int temp = a[y];
            a[y] = a[x];
            a[x] = a[z];
            a[z] = temp;

            vector<int> step = {x, y, z};
            steps.push_back(step);
            k--;
        }

        // Check if array is sorted
        bool impossible = false;
        loop(i, 1, n) {
            if (a[i - 1] > a[i]) {
                impossible = true;
                break;
            }
        }

        if (impossible) {
            cout << "-1\n";
        } else {
            int stepSize = steps.size();
            cout << stepSize << "\n";
            loop(i, 0, stepSize) {
                vector<int> step = steps[i];
                cout << step[0] + 1 << " " << step[1] + 1 << " " << step[2] + 1 << "\n";
            }
        }
    }

    return 0;
}