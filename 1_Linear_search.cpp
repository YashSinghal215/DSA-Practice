//Yash Singhal CST-SPL-2

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

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
    int flag = 0;

    for(int i=0;i<n;i++)
    {
        if(v[i] == target)
        {
            cout<<"Target found at: "<<i<<endl;
            flag = 1;
        }
    }

    if(flag == 0)
    {
        cout<<"Not Found"<<endl;
    }

}
