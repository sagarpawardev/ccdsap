//
// Created by Sagar Pawar on 11/04/20.
//
/**
 * Problem: UNITGCD
 * Basic pigeon hole principle nothing challenging except the SIGXFSZ (Max File size exceeded error)
 *
 * Algorithm:
 * 1. First chef will read page 1 2 3
 * 2. From second day onward he will read two page each dat 4 5
 *
 * Learning:
 * Sometimes SIGXFSZ may arise which means max output file size exceeded. In this problem a blank space at the end of
 * each line causing the error. Basic solution was write extra logic to avoid the blank space.
 * For example:
 * '1 2 3 ' --> Will give SIGXFSZ error
 * '1 2 3' --> Will pass
 */
#include <bits/stdc++.h>

using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    char* textFile = (char *)"/Users/sagarpawar/CLionProjects/ccdsap/APRIL20B/test/UNITGCD.txt";
    freopen(textFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t=0;
    cin >> t;
    while(t--){
        int n=0;
        cin >> n;

        // Number of pages
        if(n<4){
            cout << 1 << '\n';
        }
        else {
            cout << n / 2 << '\n';
        }

        // Print pages
        if(n>=3){
            cout << "3 1 2 3\n";
        }
        else if(n==2){
            cout << "2 1 2\n";
        }
        else if(n==1){
            cout << "1 1\n";
        }

        for(int i=4; i<=n; i+=2){
            if(n>i){
                cout << "2 " << i << " " << i+1 << '\n';
            }
            else{
                cout << "1 " << i << '\n';
            }
        }
    }

    return 0;
}