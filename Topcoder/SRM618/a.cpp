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

class WritingWords
{
	public:
		int write(string word)
		{
			int ans=0;
			for(int i=0;i<word.size();i++)
				ans+=word[i]-'A'+1;
			return ans;
		}
};
