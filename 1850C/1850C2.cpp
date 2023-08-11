
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string answer = "";
    while(n){
    char a[8][8];

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin >> a[i][j];
            if (a[i][j] != '.')
                answer += a[i][j];
        }
    }

    answer = answer + "\n";
    n--;
    }
    cout<<answer;
}
