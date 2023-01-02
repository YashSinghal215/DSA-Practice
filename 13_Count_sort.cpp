//Yash Singhal CST-SPL-2

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void countingSort(vector<int> arr, int n)
{
 
    map<int, int> freqMap;
    for (auto i = arr.begin(); i != arr.end(); i++) {
        freqMap[*i]++;
    }
 
    int i = 0;
 
    for (auto it : freqMap) {
 
        int val = it.first;
 
        int freq = it.second;

        for (int j = 0; j < freq; j++)
            arr[i++] = val;
    }
 
    cout<<"After Sorting"<<endl;
    
    for (auto i = arr.begin(); i != arr.end(); i++) {
        cout << *i << " ";
    }
}
 
int main()
{ 
    cout<<"Enter no. of process "<<endl;
    int n;
    cin>>n;

    vector<int>v(n);

    cout<<"Enter elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
 
    countingSort(v, n);
 
    return 0;
}