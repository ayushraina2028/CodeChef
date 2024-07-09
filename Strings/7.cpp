#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        int vowel = 0;
        bool falseFlag = false;
        for(auto x : s) {
            if(x == 'a' or x =='e' or x == 'i' or x == 'o' or x == 'u') vowel++;
            else vowel = 0;
            
            if(vowel > 2) {
                cout << "Happy" << endl;
                falseFlag = false;
                break;
            }
            else falseFlag = true;
        }
        
        if(falseFlag)cout << "Sad" << endl;
        
    }
    return 0;
}
