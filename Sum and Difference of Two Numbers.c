#include<stdio.h>
void main()

{
	 int num1 , num2;
    scanf("%d %d", &num1,&num2);
	
	int sum, sub;
    sum = num1 + num2;
    sub = num1 - num2;
	
     float a , b , c , d;
     scanf("%f %f", &a,&b);
     c = a + b;
     d = a - b;
    
    printf("%d %d\n",sum, sub);
    printf("%.1f %.1f\n",c , d);
}