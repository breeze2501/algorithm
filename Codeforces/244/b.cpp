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
	ll n,t,c;
	cin>>n>>t>>c;
	ll ans=0;
	ll mark=0;
	while(n--)
	{
		ll temp;
		cin>>temp;
		if(temp<=t)
			mark++;
		if(temp>t)
		{
			if(mark>=c)
				ans+=mark-c+1;
			mark=0;
		}
	}
	if(mark>=c)
		ans+=mark-c+1;
	cout<<ans<<endl;
	return 0;
}
