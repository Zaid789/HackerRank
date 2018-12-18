/*https://www.hackerrank.com/challenges/plus-minus/problem*/



#include<stdio.h>
void main()
{
	int arr_count;
	scanf("%d" , &arr_count);
	int arr[arr_count];
	for(int i = 0 ; i < arr_count ; i++)
		scanf("%d",&arr[i]);
	
	
	
	/*code for Plus Minus*/
	
	
	
	float p=0,n=0,z=0;
   	for(int i=0;i<arr_count;i++)
   	{
       		if(arr[i]==0)
       		{
       		z++;
      	 	}
       		else if(arr[i]>0)
       		{
       		p++;
       		}
       		else
       		{
       		n++;
       		}
   	}
   printf("%f\n",p/arr_count);
   printf("%f\n",n/arr_count);
   printf("%f\n",z/arr_count);


}
