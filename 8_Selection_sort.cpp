// Yash Singhal CST SPL 2

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    
    int n;
    cout<<"Enter no. of process"<<endl;
    cin>>n;
    vector<int>v(n);

    cout<<"ENter elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    for(int i=0;i<n-1;i++)
    {
        int p = i;

        for(int j=i+1;j<n;j++)
        {
            if(v[j] < v[p])
            {
                p = j;
            }
        }

        swap(v[i],v[p]);
    }

    cout<<"After sort"<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";

    }

}