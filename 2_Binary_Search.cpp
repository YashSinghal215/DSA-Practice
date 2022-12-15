//Yash Singhal CST-SPL-2

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int binary(int l,int r,vector<int>& v,int target)
{
    int flag = 0;
    while(l<r)
    {
        int mid = l+ (r-l)/2;

        if(v[mid] == target)
            {
                cout<<"Target found at: "<<mid<<endl;
                flag = 1;
                break;
            }
        else if(v[mid] > target)
            r = mid-1;
        else
            l = mid+1;
    }
    if(flag == 0)
        cout<<"Not Found"<<endl;
    
    return 0;
}
int main()
{
    vector<int>v;
    int target,n;

    cout<<"Enter size and element in vector"<<endl;

    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    cout<<"Enter Target"<<endl;
    cin>>target;
    sort(v.begin(),v.end());
    binary(0,n-1,v,target);

    return 0;
}
