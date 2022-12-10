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

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    
    //Yash Singhal CST-SPL-2

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int fibonaci(int n)
{
    if(n <= 1)
        return n;

    return fibonaci(n-1)+fibonaci(n-2);
}

int main()
{
    int n;
    cout<<"Enter the limit"<<endl;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<fibonaci(i)<<" ";
    }
   
    return 0;
}
