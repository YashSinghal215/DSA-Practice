//Yash Singhal CST-SPL-2

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the limit"<<endl;

    cin>>n;

    int a = 0,b =1;
    cout<<a<<" "<<b<<" ";
    for(int i=2;i<n;i++)
    {
        int c = a+b;
        a = b;
        b = c;
        cout<<c<<" ";
    }
   
    return 0;
}