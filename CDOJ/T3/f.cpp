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
	int y,m,d;
	while(scanf("%d-%d-%d",&y,&m,&d)!=EOF)
	{
		int t1=(y-1600)/100;
		int t2=(y-1600)/400;
		int t=t1-t2;
		if(y>=1600)
			d+=(t+11);
		else
			d+=11;
		while(1)
		{
			if(d>30&&(m==1||m==3||m==5||m==7||m==8||m==10||m==12))
			{
				d-=30;
				if(m==12)
				{
					y++;
					m=1;
				}
				else
				{
					m++;
				}
			}
			else if(d>31&&(m==4||m==6||m==9||m==11))
			{
				d-=31;
				m++;
			}
			else if(d>28&&y%4!=0&&m==2)
			{
				d-=28;
				m++;
			}
			else if(d>29&&y%4==0&&m==2)
			{
				d-=29;
				m++;
			}
			if(d<=30&&(m==1||m==3||m==5||m==7||m==8||m==10||m==12))
				break;
			if(d<=31&&(m==4||m==6||m==9||m==11))
				break;
			if(d<=28&&(y%4!=0||(y%4==0&&y%100==0&&y%400!=0))&&m==2)
				break;
			else if(d<=29&&y%4==0&&m==2)
				break;
		}
		if(m<10&&d<10)
			printf("%d-0%d-0%d\n",y,m,d);
		else if(m<10)
			printf("%d-0%d-%d\n",y,m,d);
		else if(d<10)
			printf("%d-%d-0%d\n",y,m,d);
		else
			printf("%d-%d-%d\n",y,m,d);
	}
	return 0;
}
