/*https://www.hackerrank.com/challenges/simple-array-sum/problem*/



#include<stdio.h>
void main()
{
	int ele , sum = 0;
	scanf("%d\n" , &ele);
	int arr [ele];
	for(int i=0 ; i < ele ; i++)
		scanf("%d", &arr[i]);
	/*code for adding array elements */
	for(int i=0 ; i < ele ; i++)
		 sum+=arr[i];
	printf("%d\n" , sum);
}
