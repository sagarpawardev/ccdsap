//
// Created by Sagar Pawar on 07/04/20.
//
/**
 * Problem : EXPEDI
 *
 * Algorithm :
 * 1. Start moving from start towards village 1 step at a time
 * 2. If current position has fuel station insert it into a max heap
 * 3. If fuel is over at current position pop out the fuel station with max fuel
 *
 * Complexity: O(nlogn)
 *
 * Learning:
 * 1. SPOJ has a flag ONLINE_JUDGE using which we can conditionally override input stream
 */
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

bool compareStation(struct pair<int, int> &p1, struct pair<int, int> &p2) {
    return p1.first > p2.first;
}

int main() {

#ifndef ONLINE_JUDGE
    char *textFile = (char*)"/Users/sagarpawar/CLionProjects/ccdsap/heaps/test/EXPEDI.txt";
    freopen(textFile, "r+", stdin);
#endif

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        //Collect Input
        vector<pair<int, int>> stations;
        for (int i = 0; i < n; i++) {
            int d, f;
            cin >> d >> f;

            stations.emplace_back(make_pair(d, f));
        }

        int l, fuel;
        cin >> l >> fuel;

        // Sort stations in nearest to farthest from current position
        sort(stations.begin(), stations.end(), compareStation);

        priority_queue<int> stationHeap;
        int result = 0;
        int i=0;
        // For each position
        for (int pos = l; pos > 0; pos--, fuel--) {

            // Put all the stations at current position in the max heap
            while(stations[i].first == pos){
                stationHeap.push(stations[i].second);
                i++;
            }

            // If fuel is over use top fuel station from heap
            if (fuel == 0) {
                // If no fuel station and fuel is empty mark as impossible
                if(stationHeap.empty()){
                    result = -1;
                    break;
                }

                result++;
                fuel = stationHeap.top();
                stationHeap.pop();
            }
        }
        cout << result << endl;
    }

    return 0;
}
