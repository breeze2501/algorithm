#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char m[105][105];
int x,y,w,h;
int vis[105][105];
void search(int y,int x)
{
	if(y<0||x<0||y>=h||x>=w||m[y][x]=='X')
		return;
	if(vis[y][x]&&m[y][x]=='D')
		return;
	if(m[y][x]-'A'<3)
	{
		m[y][x]+=1;
		return;
	}
	else if(m[y][x]=='D')
	{
		vis[y][x]=1;
		search(y+1,x);
		search(y-1,x);
		search(y,x+1);
		search(y,x-1);
		return;
	}
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		memset(m,0,sizeof(m));
		scanf("%d%d",&w,&h);
		for(int i=0;i<h;i++)
			scanf("%s",m[i]);
		int n;
		scanf("%d",&n);
		while(n--)
		{
			scanf("%d%d",&x,&y);
			memset(vis,0,sizeof(vis));
			if(m[y][x]-'A'<3)
				m[y][x]+=1;
			else if(m[y][x]=='X')
				continue;
			else if(m[y][x]=='D')
			{
				vis[y][x]=1;
				search(y+1,x);
				search(y-1,x);
				search(y,x+1);
				search(y,x-1);
			}
			//for(int i=0;i<h;i++)
			//{
			//	for(int j=0;j<w;j++)
			//		printf("%c",m[i][j]);
			//	printf("\n");
			//}
		}
		for(int i=0;i<h;i++)
		{
			for(int j=0;j<w;j++)
				printf("%c",m[i][j]);
			printf("\n");
		}
	}
	return 0;
}
