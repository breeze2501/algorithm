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

int a[105];

int main()
{
	int n,k;
	cin>>n>>k;
	for(int i=0;i<n;i++)
		cin>>a[i];
	int maxn=0;
	for(int i=0;i<n;i++)
	{
		int t=0;
		for(int j=0;j<n;j++)
		{
			if(a[j]==a[i])
				t++;
			if(a[j]>a[i])
				t++;
		}
		if(t>=k)
			if(a[i]>maxn)
				maxn=a[i];
	}
	cout<<maxn<<endl;
	return 0;
}
