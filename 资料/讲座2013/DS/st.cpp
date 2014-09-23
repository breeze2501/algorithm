#include<iostream>
using namespace std;
#define Maxn 10000
struct Node
{
    int a,b,left,right,cover;
};
struct Node Tree[Maxn];
int Number,Tot,c,d;
void build(int a,int b)
{
    int Now;
    Tot++;
    Now=Tot;
    Tree[Now].a=a;
    Tree[Now].b=b;
    Tree[Now].cover=0;
    if(b-a>1)
    {
        int mid=(a+b)/2;
        Tree[Now].left=Tot+1;
        build(a,mid);
        Tree[Now].right=Tot+1;
        build(mid,b);
    }
}
void insert(int Num)
{
    if(c<=Tree[Num].a&&Tree[Num].b<=d)
    	Tree[Num].cover++;
    else
    {
        int mid=(Tree[Num].a+Tree[Num].b)/2;
        if(c<mid)
            insert(Tree[Num].left);
        if(d>mid)
            insert(Tree[Num].right);
    }
}
void del(int Num)
{
    if(c<=Tree[Num].a&&Tree[Num].b<=d)
    Tree[Num].cover--;
    else
    {
        int mid=(Tree[Num].a+Tree[Num].b)>>1;
        if(c<mid)
            del(Tree[Num].left);
        if(d>mid)
            del(Tree[Num].right);
    }
}
void Count(int Num)
{
    if(Tree[Num].cover)
    	Number+=(Tree[Num].b-Tree[Num].a);
    else
    {
        if(Tree[Num].left)
        Count(Tree[Num].left);
        if(Tree[Num].right)
        Count(Tree[Num].right);
    }
}
int main()
{
    cin>>c>>d;
    build(c,d);
    int n;
    cin>>n;
    while(n--)
    {
	    cin>>c>>d;
	    insert(1);
    }
    Number=0;
    Count(1);
    cout<<Number;
    return 0;
}
