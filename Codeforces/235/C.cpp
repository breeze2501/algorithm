#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	if(m==n-1)
	{
		for(int i=0;i<m;i++)
			cout<<"01";
		cout<<'0';
		return 0;
	}
	if(n==1&&m==0)
	{
		cout<<'0'<<endl;
		return 0;
	}
	if(n>m||m>2*(n+1))
	{
		cout<<"-1"<<endl;
		return 0;
	}
	int t;
	t=m-n;
	for(int i=0;i<n;i++)
	{
		if(t)
		{
			t--;
			cout<<'1';
		}
		cout<<"10";
	}
	while(t--)
		cout<<'1';
	cout<<endl;
	return 0;
}
