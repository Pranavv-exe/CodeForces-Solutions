#include<bits/stdc++.h>
#include <math.h>
using namespace std;
//Checking if the list is sorted
bool CheckIfSorted(int a[],int m)
{
    int i,c = 0;
    for(i=0; i<m-1; i++)
    {
        if(a[i]>a[i+1])
        {
            c = 1;
            break;
        }
    }
    if(c==0)
        return true;
    else
        return false;
}

int main()
{
    int l = 0;
    int n,i,j;

    cin >> n;
    int a = n;
    int answer[n];

    for(i = 0; i < n; i++)
    {
        int m;
        cin>>m;
        int arr[m];
        int minimum;
        for(j = 0; j<m; j++)
        {
            cin>>arr[j];
        }
        minimum = abs(arr[0] - arr[1]);
        if(CheckIfSorted(arr,m))
        {
            for(j = 0; j<m-1; j++)
            {
                if(abs(arr[j]-arr[j+1])<minimum)
                    minimum = abs(arr[j] - arr[j+1]);
            }
            if(minimum == 0)
            {
                answer[l] = 1;
                l++;
            }
            else
            {
                answer[l] = ((minimum)/2) + 1;
                l++;
            }
        }
        else
        {
            answer[l] = 0;
            l++;
        }
    }

    for(i=0; i<n; i++)
    {
        cout<<answer[i]<<endl;
    }

}

//Follow avinashraj2026 for more such solutions
