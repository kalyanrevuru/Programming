#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n][n];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>arr[i][j];
	
	for(int j=n-1;j>=0;j--) cout<<arr[0][j]<<" ";
	
	for(int i=1;i<n-1;i++)
		for(int j=1;j<n-1;j++)
			if(i==j) cout<<arr[i][j]<<" ";
	
	for(int j=n-1;j>=0;j--) cout<<arr[n-1][j]<<" ";
	
	return 0;
}
