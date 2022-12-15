// Yash Singhal CST SPL 2

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int partition(vector<int>& v,int l,int r)
{
    int pivot = v[r];

    int i = l-1;

    for(int j = l;j<= r-1;j++)
    {
        if(v[j] <pivot)
        {
            i++;
            swap(v[i],v[j]);
        }
    }

    swap(v[i+1],v[r]);

    return (i+1);
}

void quick(vector<int>&v, int i,int j)
{
    if(i<j)
    {
        int p = partition(v,i,j);

        quick(v,i,p-1);
        quick(v,p+1,j);
    }
}

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

    quick(v,0,n-1);

    
    cout<<"After Quick sort"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<< v[i] <<" ";
    }

}