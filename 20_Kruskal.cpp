//Yash Singhal CST SPL 2

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*
INPUTS
7 9
1 6 10
2 3 16
2 7 14
3 4 12
4 7 18
4 5 22
5 7 24
5 6 25

*/

typedef vector<pair<int , pair<int,int>>> vii;
int rankk[10000];

int finds(int u,int *parent)
{
    if(parent[u] == u )
        return u;
    return parent[u] = finds(parent[u],parent);
}

void Union(int x,int y,int *parent)
{
    int px = finds(x,parent);
    int py = finds(y,parent);


        if(rankk[px] < rankk[py])
        {
            parent[px] = py;
        }
        else if(rankk[px] > rankk[py])
        {
            parent[py] = px;
        }
        else
        {
            parent[py] = px;
            rankk[px]++;
        }
}


vii kruskal(vii g,int v)
{
    vii r;
    int s,d,w;

    int p[v+1];

    for(int i=0;i<v;i++)
    {
        p[i] = i;
        rankk[i] = 0;
    }

    sort(g.begin(),g.end());

    int e = g.size();

    for(int i=0;i<e;i++)
    {
        s = g[i].second.first;
        d = g[i].second.second;
        w = g[i].first;
        if(finds(s,p) != finds(d,p))
        {
            r.push_back(g[i]);
            Union(s,d,p);
        }
    }
    return r;
}

int main()
{
    vii g,res;

    int v,e,s,d,w;
    cin>>v>>e;

    for(int i=0;i<e;i++)
    {
        cin>>s>>d>>w;
        g.push_back(make_pair(w,make_pair(s,d)));
    }

    res = kruskal(g,v);
    int sum = 0;
    for(int i=0;i<res.size();i++)
    {
        int w = res[i].first;
        cout<<res[i].second.first<<" "<<res[i].second.second<<endl;
        sum +=w;
    }
    cout<<sum;
}