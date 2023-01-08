// Yash Singhal CST SPL 2

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{

    int v,e;
    cin>>v>>e;

    vector<vector<pair<int,int> > >g(v+1);

    for(int i=0;i<e;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        g[u].push_back({v,w});
        g[v].push_back({u,w});
    }

    vector<int> div(v+1 ,999);

    int src;
    cin>>src;
    div[src] =  0;

    set<pair<int,int> >s;
    s.insert({0,src});

    while(!s.empty())
    {
        auto x = *(s.begin());
        s.erase(x);
        for(auto i : g[x.second])
        {
            if(div[i.first] > div[x.second] + i.second)
                {
                s.erase({div[i.first],i.first});
                div[i.first]  = div[x.second] + i.second;
                s.insert({div[i.first],i.first});
                }
        }
    }

    for(int i=1;i<=v;i++)
    {
        if(div[i] < 999)
            cout<<div[i]<<" ";

        else
            cout<<-1<<" ";
    }
}