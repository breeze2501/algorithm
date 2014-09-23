/*
ID: firstaw1
PROG: beads
LANG: C++
*/
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
#include<fstream>

typedef long long ll;
using namespace std;

int main()
{
	ofstream fout("beads.out");
	ifstream fin("beads.in");
	int n;
	fin>>n;
	string s;
	fin>>s;
	s=s+s+s;
	int ans=0;
	int v;
	for(int i=n-1;i<=2*n-1;i++)
	{
		char t;
		bool found=0;
		int cnt1=0,cnt2=0;
		for(int j=i;j>=i-n+1;j--)
		{
			if(!found)
			{
				if(s[j]!='w')
				{
					t=s[j];
					found=1;
				}
			}
			else
			{
				if(s[j]!=t&&s[j]!='w')
					break;
			}
			cnt1++;
		}
		found=0;
		for(int j=i+1;j<=i+n-cnt1;j++)
		{
			if(!found)
			{
				if(s[j]!='w')
				{
					t=s[j];
					found=1;
				}
			}
			else
			{
				if(s[j]!=t&&s[j]!='w')
					break;
			}
			cnt2++;
		}
		if(cnt1+cnt2>ans)
		{
			ans=cnt1+cnt2;
			v=i;
		}
	}
//	fout<<v<<endl;
	fout<<ans<<endl;
	return 0;
}
