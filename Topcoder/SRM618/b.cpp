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

		string find(string word)
		{
			int len=word.size();
			for(int i=0;i<len-1;i++)
				if(word[i]==word[i+1])
					return "Dislikes";
			if(len<4)
				return "Likes";
			string t1,t2;
			for(int i=0;i<len-3;i++)
				for(int j=i+1;j<len-2;j++)
					for(int k=j+1;k<len-1;k++)
						for(int m=k+1;m<len;m++)
						{
							if(word[i]==word[k]&&word[j]==word[m])
								return "Dislikes";
						}
			return "Likes";
		}
int main()
{
	string word;
	cin>>word;
	string a=find(word);
	cout<<find(word);
}
