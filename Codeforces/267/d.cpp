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

string s,x,y;

map<string,int> m;
int main(){
	int m;
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		cin>>s;
		m[s]++;
	}
	int n;
	scanf("%d",&n);
	getchar();
	for(int i=0;i<n;i++){
		char c;
		int cntx=0;
		while((c=getchar())!=' '){
			if(c=='R'||c=='r')
				cntx++;
			x+=c;
		}
		int cnty=0;
		while((c=getchar())!='\n'){
			if(c=='R'||c=='r')
				cnty++;
			y+=c;
		}
		if(m[x]&&cnty<cntx){
			m[x]--;
			m[y]++;
			ans1-=(cntx-cnty);
		}else if(m[x]&&cnty==cntx&&y.length())
	}
	return 0;
}
