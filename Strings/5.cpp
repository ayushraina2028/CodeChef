#include <bits/stdc++.h>
using namespace std;

int main() {

    int T;
    cin >> T;

    while (T--) {
        int X;
        string outcome;

        cin >> X;
        cin >> outcome;

        int prizeMoney = 100 * X;
        int carlsenPoints = 0;
        int chefPoints = 0;

        for (auto x : outcome) {
            if (x == 'C') {
                carlsenPoints += 2;
            } else if (x == 'N') {
                chefPoints += 2;
            } else {
                carlsenPoints += 1;
                chefPoints += 1;
            }
        }

        if(carlsenPoints > chefPoints) cout << (int)(0.60*prizeMoney) << endl;
        else if(carlsenPoints == chefPoints) cout << (int)(0.55*prizeMoney) << endl;
        else cout << (int)(0.40*prizeMoney) << endl;
    }

    return 0;
}
