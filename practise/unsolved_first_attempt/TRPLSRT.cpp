//
// Created by Sagar Pawar on 08/06/20.
//

/**
 Problem: TRPLSRT

 Algorithm:

 Time Complexity:
    O(n)

 Learning:
    Never use printf() if you are using cin.tie(null)

 Tags:
    must-do

**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int
#define MAX_INT 2147483647

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/unsolved_first_attempt/test/TRPLSRT.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        n++;
        vector<int> a(n);
        loop(i, 1, n) {
            cin >> a[i];
        }

        if(n <= 3 ){
            cout << "-1\n";
            continue;
        }


        vector<tuple<int, int, int>> ans;
        queue<queue<int>> cycles;

        int count = 1;
        queue<int> cycle;
        vector<bool> done(n, false);

        // Find all the cycles
        int evenCycles = 0;
        for (int i = 1; i < n && count < n; i++) {

            if (i == a[i]) {
                done[i] = true;
                continue;
            }

            if (!done[i]) {
                int j = i;
                while (!done[j]) {
                    cycle.push(j);
                    done[j] = true;
                    j = a[j];
                    count++;
                }

                cycles.push(cycle);

                int cycleSize = cycle.size();

                // Check even cycle
                if (cycleSize % 2 == 0) {
                    evenCycles++;
                    k -= (cycleSize - 1) / 2;
                } else {
                    k -= (cycleSize / 2);
                }

                if (k < 0) {
                    break;
                }

                // New Cycle
                cycle = queue<int>();

            }
        }

        k -= evenCycles;

        if (evenCycles % 2 == 1 || k < 0) {
            cout << "-1\n";
        } else {
            vector<int> extras;
            while (!cycles.empty()) {
                queue<int> cycle = cycles.front();
                cycles.pop();

                while (cycle.size() > 2) {
                    int a = cycle.front();
                    cycle.pop();

                    int b = cycle.front();
                    cycle.pop();

                    int c = cycle.front();
                    cycle.pop();

                    ans.emplace_back(make_tuple(a, b, c));

                    cycle.push(a);
                }

                if (cycle.size() == 2) {
                    extras.emplace_back(cycle.front());
                    extras.emplace_back(cycle.back());
                }

                if (extras.size() == 4) {
                    ans.emplace_back(make_tuple(extras[1], extras[0],  extras[3]));
                    ans.emplace_back(make_tuple(extras[1], extras[2], extras[3]));
                    extras.clear();
                }

            }

            int aSize = ans.size();
            cout << aSize << "\n";
            for (tuple<int, int, int> tup: ans) {
                cout << get<0>(tup) << " " << get<1>(tup) << " " << get<2>(tup) << "\n";
            }

        }

    }

    return 0;
}