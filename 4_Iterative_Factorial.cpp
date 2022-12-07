// Yash Singhal

#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int factorial(int n)
{
    int x = 1;

    for(int i = n;i>=1;i--)
    {
        x *= i;
    }
    return x;
}
int main()
{
    int n;
    cout<<"Enter the no."<<endl;

    cin>>n;

    int ans = factorial(n);

    cout<<ans;

    return 0;
}