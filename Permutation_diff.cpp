#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    deque<int> de;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<arr[i];j++)
        {
            de.push_back(i+1);
        }
    }
    int de_size=de.size();
    for(int k=0;k<de_size;k++)
    {
        cout<<de[k]<<" ";
    }
    int count=0;
    for(int i=0;i<de_size;i++)
    {
        if((de[i+1]-de[i])<=1) 
        {
            count++;
            i++;
        }
    }
    if(de_size%2!=0)count-=1; 
    cout<<"\nnumber of possible pairs: "<<count;
}