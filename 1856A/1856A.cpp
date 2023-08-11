// THIS CODE WAS WRITTEN BY DEV 
// FOllOW Dev-Vasudevan FOR MORE 

#include<iostream>
#include <string> 
using namespace std;
int main (){
    int n,i;
    string output="";
    cin>>n;
    for (i=0;i<n;i++){
        int n1,i1,max_number=0,current_num,iter=0;
        string ans;
        cin>>n1;

        for (i1=0;i1<n1;i1++){
            
            cin>>current_num;

            if (max_number<=current_num )
                max_number= current_num;

            
            else{
                iter=max_number;
            }

        }
        ans = to_string(iter); 
        output=output + ans;
        if (i!=(n-1)){
            output=output +"\n";
        }
        
    }
    cout<<output;

}
