#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int ori[25];
int temp[25];
int c[25][25];
int main()
{
	int n;
	cin>>n;
	char d;
	int t;
	for(int i=1;i<=n;i++)
		scanf("%d",&t),ori[t]=i;
	getchar();
	while(~scanf("%d",&t))
	{
		memset(temp,0,sizeof(temp));
		temp[t]=1;
		for(int i=2;i<=n;i++)
			scanf("%d",&t),temp[t]=i;
		memset(c,0,sizeof(c));
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
			{
				if(ori[i]==temp[j])
				 	c[i][j]=c[i-1][j-1]+1;
				else if(c[i-1][j]>c[i][j-1])
					c[i][j]=c[i-1][j];
				else
					c[i][j]=c[i][j-1];
			}
		printf("%d\n",c[n][n]);
		getchar();
	}
}
