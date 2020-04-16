//
// Created by Sagar Pawar on 04/04/20.
//
/**
 * Problem : RMID2
 * Most challenging part of this problem basically I/O and this problem can be solved in C/C++ only because of fast
 * execution. JAVA and python are way slower than C/C++.
 *
 * Basic Logic :
 * 1. Maintain median using 2 heaps
 *      one max heap -> elements from smallest till median called left heap
 *      one min heap -> elements from median+1 till last element called right heap
 * 2. Median will always be the top element of left heap
 *
 * Complexity: O( nlogn )
 *
 * Learning :
 * 1. cin.tie(NULL) can make huge difference in I/O performance
 *
 */

//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    char* textFile = (char*)"/Users/sagarpawar/CLionProjects/ccdsap/heaps/test/RMID2.txt";
    freopen(textFile, "r+", stdin);
#endif

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int k;
        cin >> k;

        vector<int> heapLeft;
        int leftSize = 0;
        vector<int> heapRight;
        int rightSize = 0;
        while(k!=0){
            // For positive value insert in heap
            if(k > 0){

                // If size of left heap > right heap
                if(leftSize > rightSize){

                    // Check if value to be placed in right or left
                    // If to be placed in left then pop 1 element from left and push value in right
                    // now start treating popped value as the incoming value
                    if( k < heapLeft[0]  ){
                        int x = heapLeft[0];
                        pop_heap(heapLeft.begin(), heapLeft.end());
                        heapLeft[leftSize-1] = k;
                        push_heap(heapLeft.begin(), heapLeft.end());
                        k = x;
                    }

                    // Push incoming value in right heap
                    heapRight.push_back(k);
                    push_heap(heapRight.begin(), heapRight.end(), greater<>());
                    rightSize++;
                }

                // If size of left heap = right heap
                else{

                    // Check if value to be placed in left or right
                    // If to be placed in right then pop 1 element from right and push value in left
                    // now start treating popped value as incoming value
                    if( rightSize && heapRight[0] < k){
                        int x = heapRight[0];
                        pop_heap(heapRight.begin(), heapRight.end(), greater<>());
                        heapRight[rightSize-1] = k;
                        push_heap(heapRight.begin(), heapRight.end(), greater<>());
                        k = x;
                    }

                    // Push incoming value in left heap
                    heapLeft.push_back(k);
                    push_heap(heapLeft.begin(), heapLeft.end());
                    leftSize++;
                }

            }

            // If incoming value is -1 the pop from heap
            else if(k==-1){

                // Pop from left heap since median will always be in left
                int median = heapLeft[0];
                pop_heap(heapLeft.begin(), heapLeft.end());

                // Stable heap meaning: (size of left heap == right heap) or (size of left heap == right heap + 1 )

                if(leftSize > rightSize){
                    // If heap is already stable the simply pop element from heap
                    heapLeft.pop_back();
                    leftSize--;
                }
                else{

                    // If heap is unstable make it stable
                    // By popping element from right and insert in left
                    int x = heapRight[0];
                    pop_heap(heapRight.begin(), heapRight.end(), greater<>());
                    heapRight.pop_back();
                    rightSize--;

                    heapLeft[leftSize-1] = x;
                    push_heap(heapLeft.begin(), heapLeft.end());
                }

                cout << median << "\n";
            }

            cin >> k;
        }
    }

    return 0;
}