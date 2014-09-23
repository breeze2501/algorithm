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

int a[10]={
	20, 40, 60, 80, 100, 120, 140, 160, 180,200
};

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int score=0;
		for(int i=0;i<n;i++){
			int x,y;
			scanf("%d%d",&x,&y);
			for(int j=0;j<10;j++){
				if(x*x+y*y<=a[j]*a[j]){
					score+=11-a[j]/20;
					break;
				}
			}
		}
		printf("%d\n",score);
	}
	return 0;
}
