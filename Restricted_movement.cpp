#include<bits/stdc++.h>
using namespace std;

map<int,int> result;

int factors(int x)
{
	int n=0;
	for(int i=1;i<=x;i++)
		if(x%i==0)
			n++;
	return n;
}

int next(int arr[], int target, int end) 
{ 
    int start = 0; 
  
    int ans = 1; 
    while (start <= end) 
    { 
        int mid = (start + end) / 2; 
  
        if (arr[mid] <= target)
		{
			start = mid+1; 
			return mid+1;
		} 
            
        else
        { 
            ans = mid; 
            end = mid - 1; 
        } 
    } 
  
    return ans+1; 
} 

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k;
		cin>>k;
		int sumArr[k];
		sumArr[0]=0;
		sumArr[1]=1;
		int x;
		for(x=1;x<=k;x++)
		{
			sumArr[x]=factors(x)+sumArr[x-1];
		}
		int size=sizeof(sumArr)/sizeof(sumArr[0]);
		cout<<next(sumArr,k,size);	
	}
	return 0;
}
