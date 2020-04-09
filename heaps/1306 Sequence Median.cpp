//
// Created by Sagar Pawar on 09/04/20.
//
/**
 * Problem : 1306 Sequence Median
 * Basic challenge in this problem is to use reduce memory-usage of the program.
 * Sorting and 2 heaps takes huge amount of memory
 *
 * Algorithm :
 * 1. For first (n/2, if odd and n/2 + 1, if even) elements
 *      - Push incoming elements
 * 2. For remaining elements
 *      - Push incoming element
 *      - Pop the highest element
 * 3. Median is
 *      - Top element (in case of odd)
 *      - First and second top element average (in case of even)
 *
 * Complexity: O(nlog(n/2)) = O( nlogn)
 *
 * Learning:
 * 1. median of an array always exist in contiguous sub-array of size (n/2 + 1)
 * 2. unsigned integer uses 32 bits and can be used in place of long if values are positive. This saves memory
 */

#include <iostream>
#include <vector>
#include <queue>

#define ui unsigned int

using namespace std;

int main() {

    /*char* testFile = "/Users/sagarpawar/CLionProjects/ccdsap/heaps/test/1306 Sequence Median.txt";
    freopen(testFile, "r", stdin);*/

    ui n;
    cin >> n;

    priority_queue<ui> heap;
    ui i;
    // Accept first n/2 + 1 elements
    for ( i=0;  i < (n+2)/2; i++) {
        ui a;
        cin >> a;

        heap.push(a);
    }

    // Accept remainting elements
    for( ; i<n; i++ ){
        ui a;
        cin >> a;

        heap.push(a);
        heap.pop();
    }

    // Print Answer
    if (n % 2) {
        printf("%u\n",heap.top());
    } else {
        int x = heap.top();
        heap.pop();
        printf("%.1f\n",(x + heap.top()) / 2.0);
    }

    return 0;
}