//
// Created by Sagar Pawar on 11/04/20.
//

#include <bits/stdc++.h>

using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    char *testFile = (char *)"/Users/sagarpawar/CLionProjects/ccdsap/APRIL20B/test/COVIDLQ.txt";
    freopen(testFile, "r", stdin);
#endif

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        bool following = true;
        int prev = -100;
        for(int i=0; i<n; i++){
            int a;
            cin >> a;

            if(following && a == 1){
                if(i-prev < 6){
                    following = false;
                }
                prev = i;
            }
        }

        cout << (following ? "YES" : "NO") << "\n";
    }

}