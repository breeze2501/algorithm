#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1;
	string s2;
	cin>>s1;
	cin>>s2;
	int w1=0;
	int w2=0;
	int len=s1.size();
	for(int i=0;i<len/2;i++)
	{
		string temp1=s1.substr(0,2);
		string temp2=s2.substr(0,2);
		if(temp1=="[]"&&temp2=="()")
			w1++;
		if(temp1=="()"&&temp2=="[]")
			w2++;
		if(temp1=="8<"&&temp2=="[]")
			w1++;
		if(temp1=="[]"&&temp2=="8<")
			w2++;
		if(temp1=="()"&&temp2=="8<")
			w1++;
		if(temp1=="8<"&&temp2=="()")
			w2++;
		s1=s1.substr(2);
		s2=s2.substr(2);
	}
	if(w1>w2)
		cout<<"TEAM 1 WINS"<<endl;
	else if(w2>w1)
		cout<<"TEAM 2 WINS"<<endl;
	else
		cout<<"TIE"<<endl;
}
