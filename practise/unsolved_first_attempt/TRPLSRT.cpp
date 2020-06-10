//
// Created by Sagar Pawar on 08/06/20.
//

/**
 Problem: TRPLSRT

 Algorithm:
    1. Find all possible cycle
    2. If odd number of even-cycle then print -1
    3. If odd cycles or even number of even-cycle
        - process all triplets in pair of 3
        - add unprocessed element back in cycle
        - perform this until element are 0 for odd cycle and 2 for even cycle are left
        - for even cycle add extra element in the list
        - process the extra list at the end

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

        // Element less than 3 are invalid usecase
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

            // If element is already in place than skip
            if (i == a[i]) {
                done[i] = true;
                continue;
            }

            if (!done[i]) {

                // Find a cycle and insert in the queue
                int j = i;
                while (!done[j]) {
                    cycle.push(j);
                    done[j] = true;
                    j = a[j];
                    count++;
                }
                cycles.push(cycle);

                // Check even cycle
                int cycleSize = cycle.size();
                if (cycleSize % 2 == 0) {
                    evenCycles++;
                    // subtract number of steps required (except merging part) in even cycle
                    k -= (cycleSize - 1) / 2;
                } else {
                    // subtract number of setp reuired in odd cycle
                    k -= (cycleSize / 2);
                }

                // If k is insufficient
                if (k < 0) {
                    break;
                }

                // New Cycle
                cycle = queue<int>();

            }
        }

        // Subtract extra steps required for even cycles
        k -= evenCycles;

        // If there are odd number of even-cycles or k steps are insufficient than terminate the program
        if (evenCycles % 2 == 1 || k < 0) {
            cout << "-1\n";
        } else {
            vector<int> extras;
            while (!cycles.empty()) {

                // Pop one cycle
                queue<int> cycle = cycles.front();
                cycles.pop();

                // Iterate each cycle and create triplet
                while (cycle.size() > 2) {
                    int a = cycle.front();
                    cycle.pop();

                    int b = cycle.front();
                    cycle.pop();

                    int c = cycle.front();
                    cycle.pop();

                    // Add unplace element back to cycle
                    ans.emplace_back(make_tuple(a, b, c));

                    cycle.push(a);
                }

                // Add even elements to list
                if (cycle.size() == 2) {
                    extras.emplace_back(cycle.front());
                    extras.emplace_back(cycle.back());
                }

                // If there are 4 extras procses them
                if (extras.size() == 4) {
                    ans.emplace_back(make_tuple(extras[1], extras[0],  extras[3]));
                    ans.emplace_back(make_tuple(extras[1], extras[2], extras[3]));
                    extras.clear();
                }

            }

            // Print answer
            int aSize = ans.size();
            cout << aSize << "\n";
            for (tuple<int, int, int> tup: ans) {
                cout << get<0>(tup) << " " << get<1>(tup) << " " << get<2>(tup) << "\n";
            }

        }

    }

    return 0;
}