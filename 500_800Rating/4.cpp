#include <bits/stdc++.h>
using namespace std;

int main() {
	
    int T;
    cin >> T;

    vector<vector<int>> storeNumber(T, vector<int>(3,0));
    for(int i = 0;i < T; i++) {
        for(int j = 0;j < 3; j++) {
            cin >> storeNumber[i][j];
        }
    }

    for(int i = 0;i < T; i++) {
        double numPassed = storeNumber[i][0]*storeNumber[i][1]*0.5;
        if(numPassed < storeNumber[i][2]) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
