#include <bits/stdc++.h>
using namespace std;

void checkSameFreq(string left, string right) {
    unordered_map<char, int> map;
    for(auto x : left) {
        map[x]++;
    }
    
    for(auto x : right) {
        if(map.find(x) == map.end()) {
            cout << "NO" << endl;
            return;
        }
        else map[x]--;
    }
    
    for(auto x : map) {
        if(x.second != 0) {
            cout << "NO" << endl;
            return;
        }
    }
    
    cout << "YES" << endl;
    return;
}

int main() {
	int T;
	cin >> T;
	
	cin.ignore();
    while(T--) {
        string str;
        cin >> str;
        
        int len = str.length();
        string left;
        string right;
        if(len % 2 == 0) {
            left = str.substr(0,len/2);
            right = str.substr(len/2);
        }
        
        else {
            left = str.substr(0,len/2);
            right = str.substr((len/2)+1);
        }
        
        checkSameFreq(left,right);
    }
}
