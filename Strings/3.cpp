#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin >> T;

    while(T--) {
        int sLen;
        string sequence;

        cin >> sLen;
        cin >> sequence;

        int count = 0;
        int idx = 0;

        while(idx < sLen) {
            if(sequence[idx] == '0' and sequence[idx+1] == '0') {
                count++;
                idx++;
            }
            else if(sequence[idx] == '1' and sequence[idx+1] == '1') {
                count++;
                idx++;
            }
            else idx++;
        }

        cout << count << endl;
    }

    return 0;
}
