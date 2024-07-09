#include <bits/stdc++.h>
using namespace std;

void addOne(string& oldString, int& strLen, string& answer, int index,bool& carry) {
    if(index >= strLen) return;

    addOne(oldString, strLen, answer, index+1, carry);
    string ch = "";
    ch += oldString[index];

    if(ch == "9" and index == strLen-1) {
        carry = true;
        answer += '0';
        return;
    }
    else if(ch != "9" and index == strLen-1) {
        carry = false;
        answer += to_string(stoi(ch) + 1);
        return;
    }
    else {
        if(!carry) {
            answer += ch;
            return;
        }
        else if(carry and ch != "9") {
            answer += to_string(stoi(ch)+1);
            carry = false;
            return;
        }
        else if(carry and ch == "9") {
            answer += "0";
            carry = true;
            return;
        }
    }
    

    return;
}

int main() {
	

    int T;
    cin >> T;
    cin.ignore();

    while(T--) {
        string number;
        cin >> number;

        string answer = "";
        int strLen = number.length();
        bool flag = false;
        addOne(number,strLen,answer,0,flag);

        if(flag) {
            answer += "1";
        }

        reverse(answer.begin(), answer.end());
        cout << answer << endl;

    }
   
}
