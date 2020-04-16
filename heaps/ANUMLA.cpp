//
// Created by Sagar Pawar on 25/03/20.
//
/**
 * Basic Logic: sort the array. And generate all possible values in ascending order. Separate all unit set from all composite sets
 *
 * Sort the array
 * Check if value is exist in composite set
 * If not composite:
 *  calculate all possible values using unit set and composite set
 *  put value in unit set
 *
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    char* testFile = (char*)"/Users/sagarpawar/CLionProjects/ccdsap/heaps/test/ANUMLA.txt";
    freopen(testFile, "r+", stdin);
#endif

    ios::sync_with_stdio(false);
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> a(pow(2,n));
        for(int i=0; i<pow(2, n); i++){
            cin >> a[i];
        }

        //Sort array
        sort(a.begin(), a.end());

        vector<int> unitSet;
        unordered_set<int> compositeSet;
        //skip 0
        for(int i=1; i<a.size(); i++){

            //find if value exist in composite set
            int elem = a[i];
            if(compositeSet.find(elem) == compositeSet.end()){

                //Add all possible combination in composite set
                unordered_set<int> temp;
                for(int singleElem: unitSet){
                    temp.insert(singleElem + elem );
                }
                for(int compElem: compositeSet){
                    temp.insert(compElem + elem);
                }
                compositeSet.insert(temp.begin(), temp.end());

                //Add value in unit set
                unitSet.push_back(elem);
            }
        }

        for(int i=0; i<n; i++){
            cout << unitSet[i] << " ";
        }
        cout << endl;
    }

}