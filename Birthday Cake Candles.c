#include<stdio.h>
void main()
{
	int ar_count;
	scanf("%d",&ar_count);
	int ar[ar_count];
	for(int i=0 ; i < ar_count ; i++)
		scanf("%d",&ar[i]);
	int l=ar[0];
 	int c=0;
	int i;
	for(i=0;i<ar_count;i++)
	{
    		if(l<ar[i])
    		l=ar[i];
	}
	for(i=0;i<ar_count;i++)
	{
    		if(l==ar[i])
    		c++;
	}
	printf("%d",c);
}
