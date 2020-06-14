//
// Created by Sagar Pawar on 07/06/20.
//

/**
 Problem: COVDSMPL.cpp
 
 Algorithm:
 
 Time Complexity:
  
 Learning:
 
 Tags:
 

**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long

using namespace std;

vector< vector<int> > a;
int n, p;

void processMatrix(int r1, int r2, int total){
    if(total==0)
        return;

    if(r1 == r2){
        int rowTotal = total;
        for(int c=n; c > 0; c--){

            // If no covid patient in row
            if(rowTotal==0){
                break;
            }

            // If all are covid patient in a row
            if(rowTotal==c){
                a[r1][c] = 1;
                rowTotal--;
                continue;
            }

            // Query single block
            cout << "1 " << r1 << " " << c << " " << r1 << " " << c << endl;
            int x;
            cin >> x;

            if(x==1){
                a[r1][c] = 1;
                rowTotal--;
            }
            else if(x == -1){
                exit(0);
            }

        }
    }
    else{
        // Divide in two halves
        int mid = r1 + (r2-r1)/2;

        // Process first half
        cout << "1 " << r1 << " 1 " << mid << " " << n << endl;
        int firstHalfTotal;
        cin >> firstHalfTotal;
        if(firstHalfTotal == -1) {
            exit(0);
        }
        processMatrix(r1, mid, firstHalfTotal);

        // Process second half
        int secondHalfTotal = total - firstHalfTotal;
        processMatrix(mid+1, r2, secondHalfTotal);
    }
}

int main() {
#ifndef ONLINE_JUDGE
    //char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/JUNE20B/test/COVDSMPL.txt";
    //freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        cin >> n >> p;

        a = vector< vector<int> > (n+1, vector<int>(n+1, 0));

        // Process matrix
        cout << "1 1 1 " << n << " " << n << endl;
        int total;
        cin >> total;
        processMatrix(1, n, total);

        cout << "2\n";
        loop(i, 1, n+1){
            loop(j, 1, n+1){
                cout << a[i][j] << " ";
            }
            cout << endl;
        }

        int x;
        cin >> x;
        if(x==-1){
            exit(0);
        }
    }

    return 0;
}