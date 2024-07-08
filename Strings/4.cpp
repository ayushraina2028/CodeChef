#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin >> T;
    cin.ignore();

    string sentence;
    while(T--) {
        getline(cin, sentence);
        string convertedSentence;

        bool isFirst = true;
        bool allCapital = false;
        for(int i = 0;i < sentence.length();i++) {

            if(isFirst) {
                convertedSentence += toupper(sentence[i]);
                isFirst = false;

                int index = i+1;
                bool flagOne = true;
                while(index < sentence.length() and sentence[index] != ' ') {
                    if(sentence[index] != toupper(sentence[index])) {
                        flagOne = false;
                        break;
                    }
                    else index++;
                } 

                if(!flagOne) allCapital = false;
                else allCapital = true;

            }

            else if(!isFirst and allCapital and sentence[i] != ' ') {
                convertedSentence += sentence[i];
            }

            else if(!isFirst and !allCapital and sentence[i] != ' ') {
                convertedSentence += tolower(sentence[i]);
            }

            else if(sentence[i] = ' ') {
                convertedSentence += ' ';
                isFirst = true;
            }
        }

        cout << convertedSentence << endl;
    }
}
