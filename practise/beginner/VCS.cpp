//
// Created by Sagar Pawar on 26/04/20.
//

/**
Problem: VCS
**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/beginner/test/VCS.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 0;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        vector<bool> ignored(n);
        vector<bool> tracked(n);
        loop(i, 0, m){
            int a;
            cin >> a;
            ignored[a-1] = true;
        }

        loop(i, 0, k){
            int b;
            cin >> b;
            tracked[b-1] = true;
        }

        int countIt = 0;
        int countUu = 0;
        loop(i, 0, n){
            if(ignored[i] && tracked[i])
                countIt++;

            if(!ignored[i] && !tracked[i])
                countUu++;
        }

        cout << countIt << " " << countUu << "\n";
    }

    return 0;
}