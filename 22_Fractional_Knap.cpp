//Yash Singhal CST SPL 2

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool compare(pair<double,pair<double,double>>a,pair<double,pair<double,double>>b)
{
    return a.first>b.first;
}

int main()
{
    double k;
    int n;
    cin>>n>>k;
    vector<pair<double,pair<double,double>>> item;

    for(int i=0;i<n;i++)
    {
        double w,v;
        cin>>w>>v;
        double q = v/w;
        item.push_back(make_pair(q,make_pair(w,v)));
    }

    sort(item.begin(),item.end(),compare);

    double profit = 0;

    for(int i=0;i<n &&  k != 0 ;i++)
    {
        if(k >= item[i].second.first)
        {
            profit += item[i].second.second;
            k = k-item[i].second.first;
        }
        else if( k < item[i].second.first)
        {
            profit += (item[i].first * k);
            k = 0;
        }
    }

    cout<<profit<<endl;
}