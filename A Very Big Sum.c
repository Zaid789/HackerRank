/*https://www.hackerrank.com/challenges/a-very-big-sum/problem*/

#include<stdio.h>
void main()
{
	int ele;
	scanf("%d",&ele);
        long int arr[ele];
	for(int i = 0 ; i < ele ; i++)
		scanf("%ld",&arr[i]);
	/*code for A Very Big Sum*/
	long int sum=0;
	for(int i = 0 ; i < ele ; i++)
                sum+= arr[i];
	printf("%ld" , sum);
}
