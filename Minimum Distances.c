/*https://www.hackerrank.com/challenges/minimum-distances/problem*/

#include<stdio.h>
void main()
{
	 long long int a_count;
	scanf("%llu",&a_count);
	long long  int a[a_count];
	for(int r=0;r<a_count;r++)
		scanf("%llu",&a[r]);
	/*---------------------code-------------------------*/
	int i,j,z=0;
	for(i=0;i<a_count;i++)
	{
    		for(j=i+1;j<a_count;j++)
    			if(a[i]==a[j])
    			{
        			z=j-i;
    			}
	}
	if(z==0)
	{
	z=-1;
	}
	printf("%d",z);
}

