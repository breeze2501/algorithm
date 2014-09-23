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
	int t;
	scanf("%d",&t);
	while(t--){
		int n,m;
		scanf("%d%d",&n,&m);
		int suma=0,sumb=0;
		for(int i=0;i<n;i++){
			int tmp;
			scanf("%d",&tmp);
			suma+=tmp;
		}
		for(int i=0;i<m;i++){
			int tmp;
			scanf("%d",&tmp);
			sumb+=tmp;
		}
		if(suma==sumb){
			printf("Draw\n");
		}else if(suma>sumb){
			printf("Calem\n");
		}else
			printf("Serena\n");
	}
	return 0;
}
