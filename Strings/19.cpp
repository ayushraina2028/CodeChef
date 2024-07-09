#include <bits/stdc++.h>
using namespace std;

long long stringToNumber(string& str) {
    long long answer = 0;
    
    for(auto digit : str) {
        string ch = "";
        ch += digit;
        answer = answer*10 + stoi(ch);
    }
    
    return answer;
}

int main() {
    string str = "1001";
    long long answer = stringToNumber(str);

}