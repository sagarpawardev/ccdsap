//
// Created by Sagar Pawar on 04/04/20.
//

/**
 * Problem : TSECJ05
 *
 * Algorithm :
 * 1. For each operation
 * 2. If heap is less than required size insert element
 * 3. If incoming value is greater than smallest value of heap then pop from heap and insert incoming value
 *
 * Complexity: O( nlogk )
 *
 * Learning :
 * 1. Basic heap usage
 *
 */

#include<bits/stdc++.h>

using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    char *testFile = (char*)"/Users/sagarpawar/CLionProjects/ccdsap/heaps/test/TSECJ05.txt";
    freopen(testFile, "r+", stdin);
#endif

    ios::sync_with_stdio(false);

    int t;
    cin >> t;

    while(t--){
        int k, n;
        cin >> k >> n;

        vector<int> heap;
        for(int i=0; i<n ;i++){
            int ni;
            cin >> ni;

            if(heap.size()<k){
                heap.push_back(ni);
                push_heap(heap.begin(), heap.end(), greater<>());
            }
            else if(heap[0]<ni){
                pop_heap(heap.begin(), heap.end(), greater<>());
                heap.pop_back();

                heap.push_back(ni);
                push_heap(heap.begin(), heap.end(), greater<>());
            }

            if(heap.size()<k){
                cout << "-1" << " ";
            }
            else{
                cout << heap[0] << " ";
            }
        }

        cout << endl;

    }
}