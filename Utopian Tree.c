#include<stdio.h>
int utopianTree(int n)
{
    int t=1;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        t++;
        else
        t*=2;
    }
    return t;
}
void main()
{
	int test;
	int n,out;
	scanf("%d",&test);
	while(test)
	{
		n=0;
		scanf("%d",&n);
		out=utopianTree(n);
		printf("%d\n",out);
		test--;
	}
}
