//
// Created by Sagar Pawar on 17/05/20.
//

/**
 Problem: RRSUM
 This is a problem of combinatorics.

 Algorithm:
 1. given sum a+b can be converted to form a+(x+n), where x+n is element from set 2
 2. if we deduct n from a+b, sum comes to form a+x.
 3. Now problem remains is, In how many ways can we choose one element from each of the two set {1, 2, 3} and {1, 2, 3}
    such that value is a+x (say y)
 4. answer is y-1. (Hint: In how many ways can we put a , in string "1 1 1 1 1" such that string start with
    1 and ends with 1 ?)

 Time Complexity: O(n)
 Space Complexity: O(1)

**/

#include <bits/stdc++.h>

#define loop(i, s, e) for(int i=s; i<e; i++)
#define ll long long
#define ui unsigned int
#define MAX_INT 2147483647

using namespace std;

int nC2(int n){
    if(n==1)
        return 0;
    return n%2==0 ? n/2*(n-1) : (n-1)/2 * n;
}


int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/practise/easy/test/RRSUM.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;

        ll ab;
        loop(i, 0, q){
            cin >> ab;

            // Less than lower bound return 0 and More than uperbound is out of constraints (so no nee to consider)
            if(ab<=n+1){
                cout << "0\n";
            }
            else{
                // Deduct n from a+b which makes two sets {1, 2, 3} and {1, 2, 3}
                ab -= n;
                ll extra = 2 *( ab-1-n );
                if(extra < 0)
                    extra = 0;
                cout << ab-1-extra << "\n";
            }
        }
    }

    return 0;
}