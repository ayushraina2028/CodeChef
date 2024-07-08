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
        cout << store[i][0]*4 + store[i][1] << endl;
    }

    return 0;
}
