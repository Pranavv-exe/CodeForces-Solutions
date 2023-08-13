#include<iostream>
#include<string>
using namespace std;
int main (){
    int n;
    string output="";
    cin>>n;
    for (int i=0;i<n;i++)
    {
        int n2,num,max_num=0,delta,min_delta=INT_MAX,j2=0,j;
        bool flag=false;
        cin>>n2;
        for ( j=0; j<n2 ;j++){
            cin>>num;
            if(flag)
                continue;
            if(j==0){
                max_num=num;
            }
            else{
                if (num>max_num)
                {
                    
                    delta=num-max_num;
                    max_num=num;
                    if (delta<min_delta){
                        min_delta=delta;    
                    }
                }
                else if (num==max_num){
                    min_delta=1;
                }
                else {
                    flag=true;
                    min_delta=0;
                }

                    
            }
            
        }
    if (flag)

         output+= to_string(min_delta);

    else if (min_delta==2){
        output+= to_string(min_delta);

    }
    else if (min_delta%2==0){
        output+=to_string((min_delta/2)+1);
    }
    else{
        output+=to_string((min_delta+1)/2);
    }
    if (i!=n-1){
        output+="\n";
    }
    }
    cout<<output;
    return(0);
}