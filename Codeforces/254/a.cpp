#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdlib>
#include<climits>
#include<sstream>
#include<vector>
#include<cstdio>
#include<string>
#include<stack>
#include<queue>
#include<cmath>
#include<map>
#include<set>

typedef long long ll;
using namespace std;

char a[105][105],b[105][105];

int main()
{
//  freopen("test.in","r",stdin);
//  freopen("test.out","w",stdout);
	int n,m;
	cin>>n>>m;
	string tmp;
	for(int i=0;i<n;i++)
	{
		cin>>tmp;
		for(int j=0;j<m;j++)
			a[i][j]=tmp[j];
	}
	for(int i=0;i<n;i++)
	{
		if(i%2==0)
		{
			for(int j=0;j<m;j++)
			{
				if(j%2==0)
					b[i][j]='W';
				else
					b[i][j]='B';
			}
		}
		else
		{
			for(int j=0;j<m;j++)
			{
				if(j%2!=0)
					b[i][j]='W';
				else
					b[i][j]='B';
			}
		}
	}
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			if(a[i][j]=='-')
				b[i][j]='-';
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			cout<<b[i][j];
		cout<<endl;
	}
	return 0;
}
