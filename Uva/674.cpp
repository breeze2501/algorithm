#include<iostream>
using namespace std;
const int maxn=8000;
long long dp[maxn];
int coin[5]={ 1,5,10,25,50 };
int main()
{
	dp[0]=1;
	for(int i=0;i<5;i++)
		for(int j=0;j<maxn;j++)
			dp[j+coin[i]]+=dp[j];
	int n;
	while(cin>>n)
		cout<<dp[n]<<endl;
	return 0;
}
