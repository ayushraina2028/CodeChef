#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin >> T;

    vector<vector<int>> store(T, vector<int>(2,0));
    for(int i = 0;i < T; i++) {
        for(int j = 0;j < 2; j++) {
            cin >> store[i][j];
        }
    }

    for(int i = 0;i < T; i++) {
        int numGrp;
        int numCost;

        if(store[i][0] % 6 == 0) {
            numGrp = store[i][0] / 6;
            numCost = numGrp * store[i][1];
            cout << numCost << endl;
        }
        else {
            numGrp = store[i][0] / 6;
            numCost = (numGrp + 1) * store[i][1];
            cout << numCost << endl;
        }
    }

    return 0;
}
