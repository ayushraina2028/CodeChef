#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	
	cin.ignore();
    while(T--) {
        string s1, s2;
        cin >> s1;
        cin >> s2;
        
        bool flag = true;
        int idx = 0;
        
        for(int i = 0;i < s1.length(); i++) {
            idx = 0;
            for(auto x : s1.substr(i)) {
                if(x == s2[idx]) {
                    idx++;
                }
                else idx = 0;
                
                if(idx == s2.length()) {
                    cout << "YES" << endl;
                    flag = false;
                    break;
                }
            }
            if(!flag) break;
        }
        if(flag) cout << "NO" << endl;
    }
}
