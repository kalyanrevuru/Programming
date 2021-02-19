#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<pair<int,int>> v;
	vector<pair<int,int>> v1;
	int n,t;
	cin>>n;
	cin>>t;
	while(n--)
	{
		int first,second;
		cin>>first>>second;
		v.push_back(make_pair(first,second));
	}
	for(int i=0;i<v.size();i++)
	{
		for(int j=i;j<v.size();j++)
		{
			if(v[i].second + v[j].second <= t)
			{
				v1.push_back(make_pair((v[i].first + v[j].first),(v[i].second + v[j].second)));
			}
		}	
	}
	sort(v1.begin(),v1.end());
	cout<<v1[v1.size()-1].first;
	return 0;
}
