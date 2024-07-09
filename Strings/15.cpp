#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        
        int strLen = n.length();
        string ch = "";
        
        if(strLen == 1) cout << n[0] << endl;
        else if(strLen == 2) cout << stoi(n) % 20 << endl;
        
        else {
            string number = "";
            number += n[strLen-2];
            number += n[strLen-1];
            
            int reqNum = stoi(number);
            cout << reqNum % 20 << endl;
        }
    }

}
