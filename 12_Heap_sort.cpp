// Yash Singhal CST SPL 2

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void heapify(vector<int>& v,int n,int i)
{
    int maxi = i;

    int l = 2*i+1;
    int r = 2*i+2;


    if(l<n and v[l]>v[maxi])
    {
        maxi = l;
    }
    if(r<n and v[r]>v[maxi])
    {
        maxi = r;
    }

    if(maxi != i)
    {
        swap(v[i],v[maxi]);

        heapify(v,n,maxi);
    }
}

void heapsort(vector<int>& v,int n)
{
    for(int i=n/2 -1;i>=0;i--)
    {
        heapify(v,n,i);
    }

    for(int i=n-1;i>0;i--)
    {
        swap(v[0],v[i]);

        heapify(v,i,0);

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

    heapsort(v,n);

    
    cout<<"After merge sort"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<< v[i] <<" ";
    }

}