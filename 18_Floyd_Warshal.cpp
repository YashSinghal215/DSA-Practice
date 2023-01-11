//Yash Singhal CST SPL 2

#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

const int INF = 1e9;
//vector<vector<pair<int,int>>>g;


int main()
{
 vector<vector<int>>g = { { 0, 3,  INF , 7},
                        {   8, 0,   2,   INF},
                        {   5, INF, 0,   1},
                        {   2, INF,INF,  0 }};


 //   int v;
   // cin>>v;
//
  //  for(int i=0;i<v;i++)
   // {
    //    int s,d,w;
     //   cin>>s>>d>>w;
      //  edge(g,s,d,w);
    //}

    int n = g.size();

    vector<vector<int>>dis =  g;


        for(int k=0;k<n;k++)
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);
                }
            }
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(dis[i][j] == INF)
                    cout<<"INF ";
                else
                    cout<<dis[i][j]<<" ";
            }
            cout<<endl;
        }

}