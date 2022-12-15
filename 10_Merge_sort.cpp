// Yash Singhal CST SPL 2

#include<iostream>
#include<bits/stdc++.h>

using namespace std;


void sorting(vector<int>& v,int m,int n,int mid)
{
    int left = mid - m + 1;
    int right = n - mid;

    vector<int>l(left);
    vector<int>r(right);

    for(int i = 0;i<left;i++)
    {
        l[i] = v[m + i];
    }

    for(int i = 0;i<right;i++)
    {
        r[i] = v[mid + 1+ i];
    }

    int  i = 0,j = 0,  k = m;

    while(i< left && j<right)
    {
            if(l[i] <= r[j])
            {
                v[k++] = l[i++];
            }
            else
            {
                v[k++] = r[j++];
            }
    }

    while(i<left)
    {
        v[k++] = l[i++];
    }

    while(j<right)
    {
        v[k++] = r[j++];
    }
}

void mergesort(vector<int>& v,int i,int j)
{
    if(i<j)
    {
        int mid = i + (j-i)/2;

        mergesort(v,i,mid);
        mergesort(v,mid+1,j);

        sorting(v,i,j,mid);
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

    mergesort(v,0,n-1);
    
    cout<<"After merge sort"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<< v[i] <<" ";
    }
}