#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
    cin >> T;

    vector<int> store(T, 0);
    for(int i = 0;i < T; i++) {
        cin >> store[i];
    }


    for(int i = 0;i < T; i++) {
        if(store[i] + 3 <= 10) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
