//
// Created by Sagar Pawar on 26/03/20.
//
/**
 * Problem: KSUBSUM
 *
 * Algorithm:
 * 1. Modify array to build prefix sum array (helps in range query for sum in O(1) )
 * 2. For all range combinations
 *      a. collect sum of range in a heap or multiset (keeps it sorted)
 *      b. fix size of sum collection to maximum needed k (i.e. k3)
 *
 * Complexity: O( n^2 log(k) )
 */
#include <bits/stdc++.h>

using namespace std;
void buildPrefixSumArray( vector<int>& arr, int n){
    for(int i=1; i<n; i++){
        arr[i] += arr[i-1];
    }

}


int main(){
    /*char* testFile = "/Users/sagarpawar/CLionProjects/ccdsap/heaps/test/KSUBSUM.txt";
    freopen(testFile, "r+", stdin);*/

    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n, k1, k2, k3;
        cin >> n >> k1 >> k2 >> k3;

        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        buildPrefixSumArray(a, n);
        multiset<int> set;
        int setSize = 0;

        // Try all combinations
        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){

                // Find sum of range
                int res = i<1 ? a[j] : a[j]-a[i-1];

                //Insert if set not over sized
                if(setSize < k3){
                    set.insert(res);
                    setSize++;
                }

                //Insert value in set only if value is greater than smallet value in set
                else if(*set.begin() < res){
                    set.erase(set.begin());
                    set.insert(res);
                }
            }
        }

        int i=1;
        multiset<int>:: reverse_iterator itr;
        for(itr=set.rbegin(); itr!=set.rend(); itr++){
            if(k1 == i)
                cout << *itr << " ";
            if(k2 == i)
                cout << *itr << " ";
            if(k3 == i) {
                cout << *itr << endl;
                break;
            }
            i++;
        }
    }
}