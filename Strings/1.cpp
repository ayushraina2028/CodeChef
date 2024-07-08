#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        string answer = "";
        for(int i = 0;i < s.length(); i+=2) {
            if(s[i] == '0' and s[i+1] == '0') answer += 'A';
            else if(s[i] == '0' and s[i+1] == '1') answer += 'T';
            else if(s[i] == '1' and s[i+1] == '0') answer += 'C';
            else answer += 'G';
        }

        cout << answer << endl;
    }

    return 0;

}
