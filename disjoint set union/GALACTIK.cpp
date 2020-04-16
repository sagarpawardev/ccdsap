//
// Created by Sagar Pawar on 12/04/20.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *textFile = (char *)"/Users/sagarpawar/CLionProjects/ccdsap/disjoint set union/test/GALACTIK.txt";
    freopen(textFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    const int MAX_VALUE = 1000000001;

    int n=0, m=0;
    cin >> n >> m;

    vector<int> leader(n + 1);
    for (int i = 1; i <= n; i++) {
        leader[i] = i;
    }
    for (int i = 0; i < m; i++) {
        int a=0, b=0;
        cin >> a >> b;
        int c = min(a, b);
        b = max(a, b);
        a = c;
        leader[b] = a;
    }

    for (int i = 1; i <= n; i++) {
        int j = i;
        while (leader[j] != j) {
            leader[j] = leader[leader[j]];
            j = leader[j];
        }
    }

    unordered_map<int, int> map;
    unordered_set<int> leaderSet;
    for (int i = 1; i <= n; i++) {
        leaderSet.insert(leader[i]);

        int c;
        cin >> c;
        if (c < 0)
            continue;

        if (map.find(leader[i]) == map.end()) {
            map[leader[i]] = MAX_VALUE;
        }
        map[leader[i]] = min(map[leader[i]], c);
    }

    if (map.size() < leaderSet.size()) {
        cout << -1 << "\n";
    } else {
        long long sum = 0;
        int minValue = MAX_VALUE;
        for (pair<int, int> element: map) {
            sum += (long long)element.second;
            minValue = min(minValue, element.second);
        }

        sum -= (long long)minValue;

        sum += ((long long)(leaderSet.size() - 1) * (long long)minValue);

        cout << sum << "\n";

    }

}