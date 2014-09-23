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

int main()
{
	freopen("in.txt", "r", stdin);
	freopen("out1.txt", "w", stdout);
	int t;
	cin>>t;
	for(int cas=1;cas<=t;cas++)
	{
		double c,f,x,ans=0;
		cin>>c>>f>>x;
		int n;
		if(f<=x/c)
			n=floor(x/c)+1;
		else
			n=floor(x/c);
//		cout<<n<<endl;
		if(n==0)
			ans=x/2.0;
		else
		{
			for(int i=0;i<n-2;i++)
				ans+=c/(2.0+i*f);
			ans+=x/((n-2)*f+2.0);
		}
		printf("Case #%d: %.7lf\n",cas,ans);
	}
	return 0;
}
