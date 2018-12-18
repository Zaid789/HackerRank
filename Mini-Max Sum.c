/*https://www.hackerrank.com/challenges/mini-max-sum/problem*/



#include<stdio.h>
int main()
{
	int arr_count=5;
	//scanf("%d",&arr_count);
	long long int arr[arr_count];
	for(int i = 0 ; i < arr_count ; i++)
		scanf("%llu" , &arr[i]);
	 long long int i,j,tmp=0,max=0,min=0,k=0;
	 /* code for Mini-Max Sum*/
	 /*1---> this loop will find if the elements in the array are same */
 	  if(arr[0]==arr[1]==arr[2]==arr[3]==arr[4])
    		{
       		 min=arr[0];
        	 max=arr[0];
       		 printf("%llu", min);
       		 printf("%llu", max);
        	return 0;
   		 }
	  /*2--->This loop will remove the duplicate elements in the array*/
    	for (i=0;i<arr_count;i++)
    	{
        	for(j=i+1;j<arr_count;j++)
        	{
            		if(arr[i]>arr[j])
            		{
                		tmp=arr[i];
                		arr[i]=arr[j];
                		arr[j]=tmp;
            		}
        	}
    	}

    for(i=0;i<arr_count;i++)
    {
        	for(j=i+1;j<arr_count;)
        	{
            		if(arr[j]==arr[i])
            		{
            			for(k=j;k<arr_count;k++)
            			{
                			arr[k]=arr[k+1];
            			}
            			arr_count--;
            		}
            		else
            		j++;
        	}
    }
    /*3---> This loop will find the mini and max sum of the array elemants*/
    for(i=1;i<arr_count;i++)
    {
        max=max+arr[i];
    }
    for(j=0;j<arr_count-1;j++)
    {
        min=min+arr[j];
    }
printf("%llu ", min);
printf("%llu", max);
return 0;
}




/* THIS PROGRAM IS FALING IN ONE TEST CASE CAN ANY ONE HELP ME Wrong Answer

Input (stdin)

5 5 5 5 5

Expected Output


20 20
*/
