//
// Created by Sagar Pawar on 23/06/20.
//

/**
 Problem: C.cpp
 
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
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/codeforces/CR652DIV2/test/c.txt";
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

        vector<int> a(n);
        loop(i, 0, n){
            cin >> a[i];
        }

        int ones = 0;
        vector<int> w;
        int x;
        loop(i, 0, k){
            cin >> x;

            if(x==1)
                ones++;
            else{
                w.push_back(x);
            }
        }

        int wCount = k-ones;
        sort(w.begin(), w.begin()+wCount, greater<>());

        sort(a.begin(), a.begin()+n, greater<>());
        int front = 0;
        int rear = n-1;
        int i = 0;
        ll result = 0;
        for( ;i<ones; i++){
            result += a[front];
            result += a[front];
            front++;
        }

        for(i=0; i<wCount; i++){
            result += a[front++];
            result += a[rear];
            rear -= (w[i]-1);
        }

        cout << result << "\n";

    }

    return 0;
}