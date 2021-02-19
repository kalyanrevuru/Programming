#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main()
{
	queue <int> q1,q2;
	for(int i=0;i<10;i++)
	{
		int temp;
		cin>>temp;
		if(temp>100)
		{
			cout<<"INVALID INPUT";
			return 0;
		}
		else if(temp>60 and temp<100)
		{
			if(q2.size()<=5)
				q2.push(temp);
		}
		else
		{
			q1.push(temp);
		}
	}
	int sum1=q1.size(),sum2=q2.size();

	sum1=sum1*15;
	sum2=sum2*15;

	cout<<sum1<<" "<<sum2;
	return 0;
}
