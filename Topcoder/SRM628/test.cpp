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

int vis[55],ind,cnt;
int low[55],dfn[55],belong[55],parent[55],dp[55],head[55],ins[55];
stack<int> s;

struct edge{
	int to,next;
}edges[100];
int em;

void addedge(int u,int v){
	edges[em].to=v;
	edges[em].next=head[u];
	head[u]=em++;
}

void tarjan(int x){
	low[x]=dfn[x]=++ind;
	ins[x]=1;
	s.push(x);
	for(int e=head[x];e!=-1;e=edges[e].next){
		int v=edges[e].to;
		if(!dfn[v]){
			tarjan(v);
			low[x]=min(low[v],low[x]);
		}else if(ins[v]){
			low[x]=min(low[x],dfn[v]);
		}
	}
	if(low[x]==dfn[x]){
		int t;
		cnt++;
		do{
			t=s.top();
			s.pop();
			ins[t]=0;
			belong[t]=cnt;
		}while(t!=x);
	}
}

long long count(int n){
	if(dp[n]!=-1)
		return dp[n];
	int ret=1;
	for(int i=1;i<=cnt;i++){
		if(parent[i]==n)
			ret*=count(i);
	}
	ret++;
	dp[n]=ret;
	return dp[n];
}

int main(){
	vector<int> f;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int tmp;
		cin>>tmp;
		f.push_back(tmp);
	}
	for(int i=0;i<=f.size();i++){
		belong[i]=dfn[i]=low[i]=ins[i]=0;
		head[i]=-1;
	}
	cnt=ind=em=0;
	for(int i=0;i<f.size();i++){
		addedge(f[i],i);
	}
	for(int i=0;i<f.size();i++)
		if(!dfn[i]){
		tarjan(i);
	}
	cout<<1<<endl;
	for(int i=1;i<=cnt;i++)
		parent[i]=-1;
	for(int i=0;i<f.size();i++){
		if(belong[f[i]]!=belong[i])
			parent[belong[i]]=belong[f[i]];
	}
	long long ans=1;
	for(int i=1;i<=cnt;i++)
		dp[i]=-1;
	for(int i=1;i<=cnt;i++){
		if(parent[i]==-1){
			ans*=count(i);
		}
	}
	cout<<ans<<endl;
	return 0;
}
