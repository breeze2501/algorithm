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

vector<int> a;

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char s[10];
		int n;
		a.clear();
		scanf("%s%d",s,&n);
		for(int i=0;i<n;i++){
			int tmp;
			scanf("%d",&tmp);
			a.push_back(tmp);
		}
		sort(a.begin(),a.end());
		int ans;
		if(s[0]=='F'){
			ans=a[0];
		}else if(s[0]=='H'){
			ans=a[n-1];
		}else if(s[0]=='S'){
			ans=a[n-1];
		}
		printf("%d\n",ans);
	}
	return 0;
}
