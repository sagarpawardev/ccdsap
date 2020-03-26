//
// Created by Sagar Pawar on 22/03/20.
//
#include <bits/stdc++.h>
#define ll long long

using namespace std;


bool compare (vector<int> a, vector<int> b){
    return a[0] < b[0];
}

bool descSadness(vector<int> a, vector<int> b){
    return a[2] < b[2];
}

int main(){
    /*char* testFile = "/Users/sagarpawar/CLionProjects/ccdsap/heaps/test/IPCTRAIN.txt";
    freopen(testFile, "r+", stdin);*/

    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n, d;
        cin >> n >> d;

        vector< vector<int> > a(n);
        for(int i=0; i<n; i++){
            vector<int> arr(3);
            cin >> arr[0] >> arr[1] >> arr[2];

            a[i] = arr ;
        }

        sort(a.begin(), a.end(), compare );
        vector< vector<int> > heap;
        int j = 0;
        for(int i=1; i<=d; i++) {
            //cout << a[i][0] << " " << a[i][1] << " " << a[i][2] << endl;
            while(j<n && a[j][0]<=i){
                heap.push_back(a[j++]);
                push_heap(heap.begin(), heap.end(), descSadness);
            }

            if(!heap.empty()) {
                heap[0][1]--;

                if (heap[0][1] <= 0) {
                    pop_heap(heap.begin(), heap.end(), descSadness);
                    heap.pop_back();
                }
            }

        }

        ll sadness = 0;
        for(vector<int> e: heap){
            sadness += ((ll)e[1] * (ll)e[2]);
        }

        cout << sadness << endl;
    }

}
