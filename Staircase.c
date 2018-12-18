/*https://www.hackerrank.com/challenges/staircase/problem*/

#include<stdio.h>
int main()
{
int i,n,j;
scanf("%d",&n);
 /*code for Staircase*/
for(i=1;i<=n;i++)
{
    for(j=1;j<=n;j++)
    {
        if(j<=n-i)
        printf(" ");
        else
        printf("#");
    }
    printf("\n");
}
return 0;
}

