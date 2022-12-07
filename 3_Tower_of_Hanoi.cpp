//Yash Singhal CST-SPL-2

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void hanoi(int n,char from,char to ,char aux)
{
    if(n == 0)
    return;

    hanoi(n-1,from,aux,to);
    cout<<"Moving disk "<<n<<" from rod "<<from<<" to "<<to<<endl;
    hanoi(n-1,aux,to,from);
}

int main()
{
    int n;
    cout<<"Enetr no. of disk"<<endl;

    cin>>n;

    hanoi(n,'A','C','B');

    return 0;
}