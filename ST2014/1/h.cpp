#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<climits>
#include<algorithm>
#include<vector>
#include<stack>
#include<set>
#include<queue>
#include<map>
#include<cmath>
#include<sstream>
#include<string>

typedef long long ll;
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	for(int cas=1;cas<=t;cas++)
	{
		__int64 a,b;
		scanf("%I64d%I64d",&a,&b);
		__int64 cnt=1;
		while(1)
		{
			if(a%2==0)
			{
				__int64 r=a/2-1;
				if(b<a-r)
				{
					a-=r;
					cnt++;
				}
				else
					break;
			}
			if(a%2==1)
			{
				__int64 r=a/2;
				if(b<a-r)
				{
					a-=r;
					cnt++;
				}
				else
					break;
			}
		}
		printf("Case %d: %I64d\n",cas,cnt);
	}
	return 0;
}
