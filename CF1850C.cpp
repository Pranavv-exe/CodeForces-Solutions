#include <iostream>
#include <string> 
using namespace std;

int main() {
    int t;
    cin >> t;
    int temp=t;
    string res[t];
    while (t--) {
        string ans="";
        char a;
        
        int k = 0;
        for (int i = 0; i < 64; i++) {
            cin >> a;
            if (a != '.') {
                ans += a;
                k++;
            }
            
        }
        res[t]=ans;
    }
    for(int i=temp-1;i>=0;i--){
        cout<<res[i];
        cout<<endl;
    }

    
    return 0;
}

