/*https://www.hackerrank.com/challenges/compare-the-triplets/problem*/


#include<stdio.h>
int main()
{
    int a[3],b[3];
    int sa=0,sb=0,i;
    scanf("%d %d %d",&a[0],&a[1],&a[2]);
    scanf("%d %d %d",&b[0],&b[1],&b[2]);
/*code of Compare the Triplets*/
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
        sa++;
        else if (b[i]>a[i])
        sb++;
    }
    printf("%d %d\n",sa,sb);
    return 0;
}


