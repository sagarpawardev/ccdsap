//
// Created by Sagar Pawar on 24/05/20.
//

/**
 Problem: CHFIMPRS.cpp
 
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
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/COOK118B/test/CHFIMPRS.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        stack<int> pairs;
        unordered_multiset<int> singles;
        int a;
        loop(i, 0, n){
            loop(j, 0, m){
                cin >> a;
                if(singles.find(a) == singles.end()){
                    singles.insert(a);
                }
                else{
                    singles.erase(a);
                    pairs.push(a);
                }
            }
        }

        if(m%2 == 0){
            if( !singles.empty() ){
                cout << "-1\n";
            }
            else{
                string str = "";
                loop(i, 0, n){
                    loop(j, 0, m/2){
                        int b = pairs.top();
                        pairs.pop();
                        str = to_string(b) + " " + str + " " + to_string(b);
                    }
                    cout << str << "\n";
                    str = "";
                }
            }
        }
        else{

            while(singles.size() < n){
                int b = pairs.top();
                pairs.pop();
                singles.insert(b);
                singles.insert(b);
            }

            if(singles.size() > n ){
                cout << "-1\n";
            }
            else {
                int first = *singles.begin();
                singles.erase(singles.begin());
                string s = to_string(first);
                loop(i, 0, n) {
                    loop(j, 0, m / 2) {
                        int b = pairs.top();
                        pairs.pop();
                        s = to_string(b) + " " + s + " " + to_string(b);
                    }
                    cout << s << "\n";

                    //reset
                    if (!singles.empty()) {
                        first = *singles.begin();
                        singles.erase(singles.begin());
                        s = to_string(first);
                    }
                }
            }
        }
    }

    return 0;
}