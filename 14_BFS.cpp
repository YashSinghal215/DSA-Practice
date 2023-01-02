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

void bfs(int x)
{
    queue<int>qu;

    qu.push(x);
    v[x] = true;

    while(!qu.empty())
    {
        int f = qu.front();
        qu.pop();

        cout<<f<<" ";

        for(auto i = t[f].begin();i != t[f].end();i++)
        {
            if(!v[*i])
            {
                qu.push(*i);
                v[*i] = true;
            }
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
            bfs(i);
        }
    }
}