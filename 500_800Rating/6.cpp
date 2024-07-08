#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
    cin >> T;

    vector<int> store(T, 0);
    for(int i = 0;i < T; i++) {
        cin >> store[i];
    }

    int lucky = 0;
    int unlucky = 0;
    for(int i = 0;i < T; i++) {
        if(store[i] % 2 == 0) lucky++;
        else unlucky++;
    }

    if(lucky > unlucky) cout << "READY FOR BATTLE";
    else cout << "NOT READY" << endl;

    return 0;
}
