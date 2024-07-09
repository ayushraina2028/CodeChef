#include <bits/stdc++.h>
using namespace std;


bool is_secure_password(const string& password) {
    if (password.length() < 10) {
        return false;
    }

    bool has_lower = false;
    bool has_upper = false;
    bool has_digit = false;
    bool has_special = false;
    string special_chars = "@#%&?";

    for (size_t i = 0; i < password.length(); ++i) {
        char c = password[i];
        if (islower(c)) {
            has_lower = true;
        }
        if (isupper(c) && i > 0 && i < password.length() - 1) {
            has_upper = true;
        }
        if (isdigit(c) && i > 0 && i < password.length() - 1) {
            has_digit = true;
        }
        if (special_chars.find(c) != string::npos && i > 0 && i < password.length() - 1) {
            has_special = true;
        }
    }

    return has_lower && has_upper && has_digit && has_special;
}


int main() {
	int T;
	cin >> T;
	
	cin.ignore();
    while(T--) {
        string password;
        cin >> password;
        
        if (is_secure_password(password)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
