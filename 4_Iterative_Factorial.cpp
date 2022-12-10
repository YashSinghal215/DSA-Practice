// Yash Singhal Iterative

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

--------------------------------------------------------------------------------------------------------------------------------------------------------------------
    
    //Yash Singhal CST-SPL-2  Recursion

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int factorial(int n)
{
    if(n == 0)
        return 1;

    if(n == 1)
        return 1;

    return n*factorial(n-1);
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
