//Yash Singhal CST SPL 2

#include<iostream>
#include<bits/stdc++.h>
/*
7
1 2
3 4
0 6
5 7
8 9
5 9
7 9
*/
using namespace std;

int main()
{
    vector<pair<int,int>>a;

    int n,s,e;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>s>>e;
        a.push_back(make_pair(e,s));
    }

    sort(a.begin(),a.end());

    int c = 0;

    int current = -1;

    for(int i=0;i<n;i++)
    {
        if(a[i].second > current)
        {
            c++;
            current = a[i].first;
        }
    }
    cout<<c<<endl;

}