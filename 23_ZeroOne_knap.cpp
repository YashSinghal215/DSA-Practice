// Yash Singhal CST SPL 2

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int val[5] = {0,1,2,5,6};
    int wt[5] = {0,2,3,4,5};
    int k = 8,n=4;

    int i,j;

    int sol[n+1][k+1];

    for(i=0;i<=n;i++)
    {

        for(j=0;j<=k;j++)
        {

            if(i==0 || j ==0 )
                sol[i][j] = 0;

            else if(wt[i-1] > j)
                sol[i][j] =  sol[i-1][j];

            else
                sol[i][j] = max(sol[i-1][j] , sol[i-1][j-wt[i-1]] + val[i-1]);
        }
    }

    cout<<sol[n][k]<<endl;
    cout<<sol[2][3]<<sol[3][3]<<endl;

    i = n;
    j = k;

    while(i>0 && j>0)
    {
        if(sol[i][j] == sol[i-1][j])
            {
                cout<< i <<" = 0"<<endl;
                i--;
            }

        else
        {
            cout<<i <<" = 1"<<endl;
            i--;
            j = j-wt[i];
        }

    }
}