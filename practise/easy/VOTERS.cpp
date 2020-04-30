//
// Created by Sagar Pawar on 27/04/20.
//

/**
Problem: VOTERS
**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/easy/test/VOTERS.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) {
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;

        vector<int> l1(n1 + 1), l2(n2 + 1), l3(n3 + 1);
        loop(i, 0, n1) cin >> l1[i];
        l1[n1] = 1000000001;

        loop(i, 0, n2) cin >> l2[i];
        l2[n2] = 1000000002;

        loop(i, 0, n3) cin >> l3[i];
        l3[n3] = 1000000003;

        vector<int> ans;
        int i = 0, j = 0, k = 0;
        while (i < n1 || j < n2 || k < n3) {

            if (l1[i] == l2[j]) {
                ans.push_back(l1[i]);
                i++;
                j++;
                continue;
            } else if (l1[i] == l3[k]) {
                ans.push_back(l1[i]);
                i++;
                k++;
                continue;
            } else if (l2[j] == l3[k]) {
                ans.push_back(l3[k]);
                j++;
                k++;
                continue;
            }

            if (i < n1 && l1[i] < l2[j] && l1[i] < l3[k]) {
                i++;
            } else if (j < n2 && l2[j] < l1[i] && l2[j] < l3[k]) {
                j++;
            } else if (k < n3 && l3[k] < l1[i] && l3[k] < l2[j]) {
                k++;
            }
        }

        cout << ans.size() << "\n";
        loop(i, 0, ans.size())cout << ans[i] << "\n";
    }

    return 0;
}