//
// Created by Sagar Pawar on 04/04/20.
//
/**
 * Problem : WEIRDFN
 *
 * Algorithm :
 * 1. Keep track of median by dividing inputs in 2 halves
 *      a. left half in form of heap (i.e. greatest element on top)
 *      b. right half in form of priority queue (i.e. smallest element on top)
 *
 * Complexity: O( tlogn )
 *
 * Learning :
 * 1. Basic heap usage
 *
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

#define ll long long

using namespace std;

vector<ll> heapLeft;
priority_queue<ll> pqRight;

int size = 0;

void clearMedian(){
    heapLeft.clear();
    pqRight = priority_queue <ll>();
}

ll insertMedian(ll a) {
    size++;
    if (heapLeft.size() > pqRight.size()) {
        pqRight.push(a);
    } else {
        heapLeft.push_back(a);
        push_heap(heapLeft.begin(), heapLeft.end());
    }

    // If heap top element > then priority queue top element
    // Then exchange elements
    if (!heapLeft.empty() && !pqRight.empty()) {
        if (heapLeft[0] > pqRight.top()) {
            ll x = heapLeft[0];
            pop_heap(heapLeft.begin(), heapLeft.end());
            heapLeft.pop_back();

            ll y = pqRight.top();
            pqRight.pop();

            heapLeft.push_back(y);
            push_heap(heapLeft.begin(), heapLeft.end());

            pqRight.push(x);
        }
    }

    return heapLeft[0];
}


int main() {
    /*char *testfile = "/Users/sagarpawar/CLionProjects/ccdsap/heaps/test/WEIRDFN.txt";
    freopen(testfile, "r+", stdin);*/

    ios::sync_with_stdio(false);

    int t;
    cin >> t;

    while (t--) {
        ll a, b, c, n;
        cin >> a >> b >> c >> n;

        clearMedian();

        ll fi = 1;
        ll sum = 0;
        for (ll i = 1; i <= n; i++) {
            sum = sum + fi;

            //Calculate sum for next iteration
            ll mi = insertMedian(fi);
            fi = (a*mi + b*(i+1) + c) % 1000000007;
        }

        cout << sum << endl ;
    }

    return 0;
}
