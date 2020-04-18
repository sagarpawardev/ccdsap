//
// Created by Sagar Pawar on 19/04/20.
//
#include<bits/stdc++.h>

using namespace std;

pair<int, int> leader(vector<vector<pair<int, int>>> &parent, pair<int, int> child) {
    pair<int, int> temp = child;
    while (parent[temp.first][temp.second].second != 0) {
        temp = parent[temp.first][temp.second];
    }

    if(temp!=child) {
        parent[child.first][child.second] = temp;
    }
    return temp;
}

bool greaterThan(pair<int, int> pair1, pair<int, int> pair2) {
    return (pair1.first == pair2.first) ? pair1.second < pair2.second : pair1 < pair2;
}

int getInt(char c1, char c2) {
    int i1 = c1<='Z' ? c1-'A' : c2-'a';
    int i2 = c2<='Z' ? c2-'A' : c2-'a';
    return stoi(to_string(i1) + to_string(i2));
}

pair<int, int> getPair(char c1, char c2, char r1, char r2) {
    int c = getInt(c1, c2);
    int r = ceil((double) getInt(r1, r2) / 5);
    return make_pair(c, r);
}

int main() {

#ifndef ONLINE_JUDGE
    char *testFile = (char *) "/Users/sagarpawar/CLionProjects/ccdsap/disjoint set union/test/JABO.txt";
    freopen(testFile, "r", stdin);
#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n=0, r=0, c=0;
    cin >> n >> r >> c;

    vector<vector<pair<int, int>>> parent(c + 1, vector<pair<int, int>>(r + 1));

    for (int i = 1; i < c + 1; i++) {
        for (int j = 1; j < r + 1; j++) {
            parent[i][j] = make_pair(0,0);
        }
    }

    for(int i=0; i<n; i++) {
        char qt=0;
        cin >> qt;
        if (qt == 'W') {
            char c11=0, c12=0, r11=0, r12=0;
            cin >> c11 >> c12 >> r11 >> r12;

            char c21=0, c22=0, r21=0, r22=0;
            cin >> c21 >> c22 >> r21 >> r22;

            pair<int, int> pair1 = getPair(c11, c12, r11, r12);
            pair<int, int> pair2 = getPair(c21, c22, r21, r22);

            if (greaterThan(pair1, pair2)) {
                parent[pair2.first][pair2.second] = pair1;
            } else {
                parent[pair1.first][pair1.second] = pair2;
            }

        } else if (qt == 'V') {
            char c11=0, c12=0, r11=0, r12=0;
            cin >> c11 >> c12 >> r11 >> r12;

            pair<int, int> pair1 = getPair(c11, c12, r11, r12);
            pair<int, int> leader1 = leader(parent, pair1);
            parent[leader1.first][leader1.second] = make_pair(1, 0);
        } else if (qt == 'R') {
            char c11=0, c12=0, r11=0, r12=0;
            cin >> c11 >> c12 >> r11 >> r12;

            pair<int, int> pair1 = getPair(c11, c12, r11, r12);
            pair<int, int> leader1 = leader(parent, pair1);
            parent[leader1.first][leader1.second] = make_pair(0, 0);
        } else {
            char c11=0, c12=0, r11=0, r12=0;
            cin >> c11 >> c12 >> r11 >> r12;

            char c21=0, c22=0, r21=0, r22=0;
            cin >> c21 >> c22 >> r21 >> r22;

            pair<int, int> pair1 = getPair(c11, c12, r11, r12);
            pair<int, int> pair2 = getPair(c21, c22, r21, r22);

            pair<int, int> leader1 = leader(parent, pair1);
            pair<int, int> leader2 = leader(parent, pair2);

            if (parent[leader1.first][leader1.second] == parent[leader2.first][leader2.second]) {
                cout << "OFF\n";
            } else {
                cout << "ON\n";
            }
        }
    }

    return 0;
}


