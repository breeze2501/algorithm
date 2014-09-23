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

int x[1005];

int main(){
	int n,m,k;
	scanf("%d%d%d",&n,&m,&k);
	for(int i=0;i<m;i++)
		scanf("%d",&x[i]);
	int myx;
	scanf("%d",&myx);
	int ans=0;
	for(int i=0;i<m;i++){
		int tmp=x[i]^myx;
		int cnt=0;
		while(tmp){
			if(tmp%2)
				cnt++;
			tmp/=2;
		}
		if(cnt<=k)
			ans++;
	}
	printf("%d",ans);
	return 0;
}
