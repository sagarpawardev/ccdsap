//
// Created by Sagar Pawar on 02/04/20.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    /*char *testFile = "/Users/sagarpawar/CLionProjects/ccdsap/heaps/test/RRATING.txt";
    freopen(testFile, "r+", stdin);*/
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> heap;
    vector<int> buffer;
    int size = 0;
    while (n--) {
        int q;
        cin >> q;
        if (q == 1) {
            int x;
            cin >> x;

            size++;

            buffer.push_back(x);
            push_heap(buffer.begin(), buffer.end());
        } else {

            int maxSize = size / 3;

            while ((!buffer.empty() && !heap.empty() && (heap[0] < buffer[0])) || (heap.size() < maxSize)) {
                int x = buffer[0];

                pop_heap(buffer.begin(), buffer.end());
                buffer.pop_back();

                heap.push_back(x);
                push_heap(heap.begin(), heap.end(), greater<>());
                //cout << "Hello" << endl;
            }

            while (heap.size() > maxSize) {
                int x = heap[0];

                pop_heap(heap.begin(), heap.end(), greater<>());
                heap.pop_back();

                buffer.push_back(x);
                push_heap(buffer.begin(), buffer.end());
                //cout << "Sagar" << endl;
            }


            if (heap.empty()) {
                cout << "No reviews yet";
            } else {
                cout << heap[0];
            }
            cout << endl;
        }
    }

}
