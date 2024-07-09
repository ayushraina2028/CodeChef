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
        
        
        bool bobServe = false;
        bool aliceServe = true;
        
        int bobPoints = 0;
        int alicePoint = 0;
        
        for(auto x : s) {
            if(x == 'A' and aliceServe) {
                alicePoint++;
            }
            else if(x == 'B' and aliceServe) {
                aliceServe = false;
                bobServe = true;
            }
            else if(x == 'A' and !aliceServe) {
                aliceServe = true;
                bobServe = false;
            }
            else if(x == 'B' and bobServe) {
                bobPoints++;
            }
        }
        
        cout << alicePoint << " " << bobPoints << endl;
    }

}
