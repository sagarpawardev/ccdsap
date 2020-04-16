//
// Created by Sagar Pawar on 02/04/20.
//
/**
 * Problem : RRATING
 *
 * Algorithm :
 * 1. If insert query then put in default array
 * 2. If show query then push to result array until 1/3rd of total capacity reached
 *      or least element from 1/3rd is less than greatest element of default array
 * 3. Clear the over-sized top 1/3rd element
 *
 * Complexity: O( n(logn + nlogn) ) = O(n^2 logn)
 *
 * Learning :
 * 1. Process query lazily
 * 2. Time ( Push smaller heap -> bigger heap ) > Time (Push bigger heap -> smaller heap)
 *
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char *testFile = (char*)"/Users/sagarpawar/CLionProjects/ccdsap/heaps/test/RRATING.txt";
    freopen(testFile, "r+", stdin);
#endif

    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> topOneThird;
    vector<int> defaultHeap;
    int size = 0;
    while (n--) {
        int q;
        cin >> q;

        //If query type insert
        if (q == 1) {
            int x;
            cin >> x;

            size++;

            //Push to default heap
            defaultHeap.push_back(x);
            push_heap(defaultHeap.begin(), defaultHeap.end());
        } else {

            int maxCapacity = size / 3;

            // Pop values from default heap to topOneThird if
            // a) topOneThird's smallest value < default heap greatest value or
            // b) topOneThird's size has not reached maxCapacity
            while ((!defaultHeap.empty() && !topOneThird.empty() && (topOneThird[0] < defaultHeap[0])) || (topOneThird.size() < maxCapacity)) {
                int x = defaultHeap[0];

                pop_heap(defaultHeap.begin(), defaultHeap.end());
                defaultHeap.pop_back();

                topOneThird.push_back(x);
                push_heap(topOneThird.begin(), topOneThird.end(), greater<>());
            }

            //Push values to default heap from topOneThird in case of over capacity
            while (topOneThird.size() > maxCapacity) {
                int x = topOneThird[0];

                pop_heap(topOneThird.begin(), topOneThird.end(), greater<>());
                topOneThird.pop_back();

                defaultHeap.push_back(x);
                push_heap(defaultHeap.begin(), defaultHeap.end());
            }


            if (topOneThird.empty()) {
                cout << "No reviews yet";
            } else {
                cout << topOneThird[0];
            }
            cout << endl;
        }
    }

}
