//Yash Singhal CST SPL 2

#include<bits/stdc++.h>
#define IN 99999999999

using namespace std;

int main()
{
    int v,e;

    cin>>v>>e;
    vector<vector<int>>g;

    for(int i=0;i<e;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        g.push_back({u,v,w});
    }
    int src ;
    cin>>src;

    vector<int> div(v,IN);

    div[src] = 0;

    for(int i=0;i<v-1;i++)
    {
        for(auto e : g)
        {
            int u=e[0];
            int v=e[1];
            int w=e[2];
            div[v] = min(div[v] , div[u] + w);
        }
    }

    for(auto i : div)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}
