#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin >> T;

    while(T--) {
        string hiddenWord;
        string guess;

        cin >> hiddenWord;
        cin >> guess;

        string answer = "";
        for(int i = 0;i < hiddenWord.length();i++) {
            if(hiddenWord[i] == guess[i]) answer += 'G';
            else answer += 'B';
        }

        cout << answer << endl;
    }

    return 0;
}
