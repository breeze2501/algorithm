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

int a[200005];

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
		bool flag=true;
		for(int i=0;i<n-1;i++)
			if(a[i]==a[i+1]){
				flag=false;
				break;
			}
		if(flag)
			printf("non-boring\n");
		else
			printf("boring\n");
	}
	return 0;
}
