#include <bits/stdc++.h>
using namespace std;

bool checkString(string str) {
    if(str.length() < 3) return false;

    for(int i = 0;i < str.length()-2; i++) {
        if((str[i] == '0') and (str[i+1] == '1') and (str[i+2] == '0')) return true;
        else if((str[i] == '1') and (str[i+1] == '0') and (str[i+2] == '1')) return true;
    }

    return false;
}

int main() {
    int T;
    cin >> T;
    cin.ignore();
    
    while(T--) {
        string str;
        cin >> str;

        bool answer = checkString(str);
        if(answer) cout << "Good" << endl;
        else cout << "Bad" << endl;
    }
}