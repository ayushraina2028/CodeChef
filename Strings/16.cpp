#include <bits/stdc++.h>
using namespace std;

void checkWord(string words, string newWord) {
    unordered_set<char> set;
    
    for(auto x : words) set.insert(x);
    
    for(auto x : newWord) {
        if(set.find(x) == set.end()) {
            cout << "No" << endl;
            return;
        }
    }
    
    cout << "Yes" << endl;
    return;
}

int main() {
	string words;
	cin >> words;
	
	int T;
	cin >> T;
	
	while(T--) {
	    string newWord;
	    cin >> newWord;
	    
	    checkWord(words, newWord);
	}
}
