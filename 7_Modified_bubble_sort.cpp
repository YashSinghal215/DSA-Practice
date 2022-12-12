#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n ;
    cout<<"Enter no. of elements"<<endl;
    cin>>n;
    vector<int>v(n);
    cout<<"Enter elements in vector"<<endl;
    for(int i = 0;i<n;i++)
    {
        cin>>v[i];
    }

    for(int i=0;i<n-1;i++)
    {
        int s = 0;
        for(int j=0;j<n-i-1;j++)
        {
            if(v[j] > v[j+1])
            {
                swap(v[j],v[j+1]);
                s++;
            }
        }
        if(s == 0)
        break;
    }

    cout<<"After sort"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
}