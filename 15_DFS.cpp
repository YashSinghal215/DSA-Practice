// Yash Singhal CST SPL 2

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector<bool>v;
vector<vector<int>>t;

void edge(int a,int b)
{
    t[a].push_back(b);
}

void dfs(int x)
{
    v[x] = true;

    cout<<x<<" ";

    for(auto it = t[x].begin();it != t[x].end(); it++)
    {
        if(!v[*it])
        {
            dfs(*it);
        }
    }

}

int main()
{
    int n,e;
    cout<<"Enter the node and edges"<<endl;

    cin>>n>>e;

    v.assign(n,false);
    t.assign(n, vector<int>());

    int a,b;

    for(int i=0;i<e;i++)
    {
        cin>>a>>b;
        edge(a,b);
    }

    for(int i=0;i<n;i++)
    {
        if(!v[i])
        {
            dfs(i);
        }
    }
}