#include<cstdio>
#include<cmath>
int main()
{
	double a1,a2,b1,b2,c1,c2;
	double ans;
	int flag=0;
	scanf("%lf%lf%lf",&a1,&b1,&c1);
	scanf("%lf%lf%lf",&a2,&b2,&c2);
	double x1,x2;
	double a=a1-a2,b=b1-b2,c=c1-c2;
	//printf("%lf%lf%lf",a,b,c);
	//int jud=b*b-4*a*c;
	//printf("%lf\n",jud);
	if(b*b-4*a*c<=0)
	{
		ans=0;
		flag=1;
	}
	if(flag==0)
	{
		x1=(-b)/(2*a)+sqrt(b*b-4*a*c)/(2*a);
		x2=(-b)/(2*a)-sqrt(b*b-4*a*c)/(2*a);
		//printf("%lf %lf\n",x1,x2);
		ans=a*(x1*x1*x1/3-x2*x2*x2/3)+b*(x1*x1/2-x2*x2/2)+c*(x1-x2);
	}
	if(ans<0)
		ans=-ans;
	printf("%.3lf",ans);
	
}
