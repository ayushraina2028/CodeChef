#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        string month = s.substr(0,3);
        string day = s.substr(3,5);
        
        if((stoi(month) <= 12 and stoi(day) <= 31) and (stoi(month) <= 31 and stoi(day) <= 12)) cout << "BOTH" << endl;
        else if(stoi(month) <= 12 and stoi(day) <= 31) cout << "MM/DD/YYYY" << endl;
        else if(stoi(month) <= 31 and stoi(day) <= 12) cout << "DD/MM/YYYY" << endl;
    }

}
