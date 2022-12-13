// Yash Singhal CST SPL 2

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    cout<<"Enter no. of process "<<endl;
    int n;
    cin>>n;

    vector<int>v(n);

    cout<<"Enter elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    int mini,j,i;
    for(i = 1;i<n;i++)
    {
        mini = v[i];
        j = i-1;

        while(j>=0 and v[j] > mini)
        {
            v[j+1] = v[j];
            j--;
        }

        v[j+1] = mini;
    }

    cout<<"After sorting "<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }

}