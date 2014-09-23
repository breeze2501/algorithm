#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<climits>
#include<algorithm>
#include<vector>
#include<stack>
#include<set>
#include<queue>
#include<map>
#include<cmath>
#include<sstream>
#include<string>

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main(){
	int p,e,i,d,cas=0;
	while(~scanf("%d%d%d%d",&p,&e,&i,&d)&&((p+1)||(e+1)||(i+1)||(d+1))){
		cas++;
		p=23-(p%23);e=28-(e%28);i=33-(i%33);
		p+=d;e+=d;i+=d;
		int j;
		for(j=1;;j++){
			if((p+j)%23==0&&(e+j)%28==0&&(i+j)%33==0)
				break;
		}
		printf("Case %d: the next triple peak occurs in %d days.\n",cas,j);
	}
	return 0;
}
