/*https://www.hackerrank.com/challenges/angry-professor/problem*/

#include<stdio.h>
/*code for Angry Professor*/
char* angryProfessor(int k, int a_count, int* a)
{
int  z=0;
for(int i=0;i<a_count;i++)
{
    if(a[i]<=0)
    z++;
    
}
if(z<k)
return  "YES";
else
return "NO";    
}
void main()
{
	int test;
	char result;
	scanf("%d",&test);
	while(test)
	{
	int z=0;
	scanf("%d",&z);
	int k=0;
	scanf("%d",&k);
	int a[z];
	for( int i = 0; i < z ; i++)
		scanf("%d",&a[i]);
	char* result = angryProfessor(k, z, a);
	printf("%s\n",result);
	test--;
	}
}

