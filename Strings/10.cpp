#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	
	cin.ignore();
	
	while(T--) {
	    string logData;
	    cin >> logData;
	    
	    bool flag = true;
	    for(int i = 0;i < logData.length(); i+=2) {
	        if(logData[i] == logData[i+1]) {
	            cout << "no" << endl;
	            flag = false;
	            break;
	        }
	    }
	    
	    if(flag) cout << "yes" << endl;
	    
	}

}
