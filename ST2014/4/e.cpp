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
using namespace std;

int a[105];
int ans[105];

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		for(int i=0;i<n+1;i++){
			scanf("%d",&a[i]);
		}
		for(int i=0;i<n;i++){
			ans[i]=a[i]*(n-i);
		}
		printf("%d",ans[0]);
		for(int i=1;i<n;i++){
			printf(" %d",ans[i]);
		}
		printf("\n");
	}
	return 0;
}
