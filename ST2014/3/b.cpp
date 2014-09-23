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

int a[10005];

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int m;int cnt=0;
		scanf("%d",&m);
		while(m--){
			string s;int x;
			cin>>s>>x;
			if(s=="add"){
				int l=0,r=cnt;
				while(r-l>1){
					int mid=(l+r)/2;
					if(a[mid]<=x){
						l=mid;
					}else{
						r=mid;
					}
				}
				for(int i=cnt;i>r;i--){
					a[i]=a[i-1];
				}
				a[r]=x;
				cnt++;
//				cout<<"r:"<<r<<endl;
//				for(int i=0;i<cnt;i++)
//					cout<<a[i]<<' ';
//				cout<<endl;
				if(cnt%2==1)
					printf("%d\n",a[cnt/2]);
				else
					printf("%g\n",((double)(a[cnt/2]+a[cnt/2-1]))/2);
			}
			if(s=="remove"){
				int l=-1,r=cnt;
				while(r-l>1){
					int mid=(l+r)/2;
					if(a[mid]>=x){
						r=mid;
					}else{
						l=mid;
					}
				}
//				cout<<"r:"<<r<<' '<<a[r]<<endl;
				if(a[r]!=x||r>=cnt||r<0){
					printf("Wrong!\n");
					continue;
				}else{
//					cout<<"re:";
					for(int i=r;i<=cnt-2;i++){
						a[i]=a[i+1];
//						cout<<a[i]<<' ';
					}
//					cout<<endl;
					cnt--;
					if(cnt==0){
						printf("Empty!\n");
						continue;
					}
					if(cnt%2==1)
						printf("%d\n",a[cnt/2]);
					else
						printf("%g\n",((double)(a[cnt/2]+a[cnt/2-1]))/2);
				}
//				for(int i=0;i<cnt;i++){
//					cout<<a[i]<<' ';
//				}
//				cout<<endl;
			}
		}
	}
	return 0;
}
