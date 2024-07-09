#include <bits/stdc++.h>
using namespace std;


void checkAnagram(string s, string t) {
    unordered_set<char> charSet;
    
    for(auto x : s) charSet.insert(x);
    
    for(auto x : t) {
        if(charSet.find(x) != charSet.end()) {
            charSet.erase(x);
        }
    }
    
    if(charSet.size() == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
	int T;
	cin >> T;
	
	cin.ignore();
    while(T--) {
        string s, t;
        cin >> s >> t;
        
        if(s.length() != t.length()) cout << "NO" << endl;
        else checkAnagram(s,t);
    }
}
