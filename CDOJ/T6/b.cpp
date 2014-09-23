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
	string s;
	while(cin>>s)
	{
		int n0=0,n1=0;
		char r;
		if(s[0]=='0')
		{
			n0++;
			r='0';
		}
		else
		{
			n1++;
			r='1';
		}
		for(int i=1;i<s.size();i++)
		{
			if(s[i]!=r)
			{
				int temp;
				temp=n0;
				n0=n1;
				n1=temp;
			}
			if(s[i]=='0')
				n0++;
			else
				n1++;
			r=s[i];
		}
		cout<<n0<<' '<<n1<<endl;
	}
	return 0;
}
