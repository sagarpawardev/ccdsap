//
// Created by Sagar Pawar on 24/04/20.
//

/**
Problem: PERFCONT
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/school/test/PERFCONT.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 0;
    cin >> t;
    while (t--) {
        int n, p;
        cin >> n >> p;

        int cwCutoff = p/2;
        int hardCutoff = p/10;
        int cakewalk = 0, hard = 0;
        for(int i=0; i<n; i++){
            int solves;
            cin >> solves;

            if( solves >= cwCutoff ){
                cakewalk++;
            }

            if( solves <= hardCutoff){
                hard++;
            }
        }

        if(cakewalk == 1 && hard == 2){
            cout << "yes\n";
        }
        else{
            cout << "no\n";
        }

    }

    return 0;
}