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
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> >pq;

    int src;
    cin>>src;

    pq.push(make_pair(0, src));
    div[src] =  0;

    while (!pq.empty()) 
    {
        int u = pq.top().second;
        pq.pop();
  
        for (auto x : g[u]) 
        {
            int v = x.first;
            int weight = x.second;
  
            if (div[v] > div[u] + weight) 
            {
                div[v] = div[u] + weight;
                pq.push(make_pair(div[v], v));
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