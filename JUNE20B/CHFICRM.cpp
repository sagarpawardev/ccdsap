//
// Created by Sagar Pawar on 07/06/20.
//

/**
 Problem: CHFICRM.cpp
 
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
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/JUNE20B/test/CHFICRM.txt";
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

        vector<int> a(n);
        loop(i, 0, n){
            cin >> a[i];
        }

        vector<int> coin(11, 0);
        int i = 0;
        for( ; i<n; i++ ){
            a[i] -= 5;

            if(a[i]==0) {
                coin[5]++;
            }
            else if(a[i] == 10){
                if(coin[10] > 0){
                    coin[10]--;
                }
                else if(coin[5] > 1){
                    coin[5] -= 2;
                }
                else{
                    break;
                }
            }
            else if(a[i] == 5){
                if(coin[5] > 0){
                    coin[5]--;
                }
                else{
                    break;
                }
                coin[10]++;
            }
        }

        if(i==n){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }

    }

    return 0;
}