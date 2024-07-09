#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	
	cin.ignore();
    while(T--) {
        string s;
        cin >> s;
        
        int a = 0;
        int b = 0;
        
        for(auto x : s) {
            if(x == 'a') a++;
            else if(x == 'b') b++;
        }
    
        cout << min(a,b) << endl;
    }
    
}
