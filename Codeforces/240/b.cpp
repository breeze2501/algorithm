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
ll ans[100005];

int main()
{
	ll n,a,b;
	cin>>n>>a>>b;
	for(int i=0;i<n;i++)
	{
		ll t;
		cin>>t;
		ans[i]=(t%b)*(a%b)%b/a;
	}
	for(int i=0;i<n;i++)
		cout<<ans[i]<<' ';
	return 0;
}
