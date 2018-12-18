#include<stdio.h>
void main()
{
	int num,tmp=0,c=0,t=0,test;
	scanf("%d",&test);
	while(test)
	{
	c=0;
	scanf("%d",&num);
	tmp=num;
	while(tmp)
	{
       		 t=tmp%10;
        	if(t==0)
		{
		tmp=tmp/10;
       		 continue;
		}
        	if(num%t==0)
        	c++;
        	tmp=tmp/10;
    	}
	printf("%d",c);
	test--;
	}
}
