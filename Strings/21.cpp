#include <bits/stdc++.h>
using namespace std;

// Wildcard match easy version
int main() {
    int t;
    cin>>t;
    while(t--){
        string x,y;
        cin >> x;
        cin >> y;
        
        bool flag = true;
        int len = x.length();
        for(int i = 0;i < len; i++) {
            if((x[i] != '?') and (y[i] != '?') and (x[i] != y[i])) {
                cout << "No" << endl;
                flag = false;
                break;
            }
        }
        
        if(flag) cout << "Yes" << endl;
    }

}
