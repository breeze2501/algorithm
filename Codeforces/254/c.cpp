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

int a[505];

int main()
{
//  freopen("test.in","r",stdin);
//  freopen("test.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	double ans=0;
	while(m--)
	{
		int l,r,c;
		cin>>l>>r>>c;
		if((a[l]+a[r])*1.0/c>ans)
			ans=(a[l]+a[r])*1.0/c;
	}
	printf("%.15lf",ans);
	return 0;
}
