#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
char ch;         
char s[100];
char s1[122];
scanf("%c",&ch);
scanf("%s",s);
scanf("%[^\n]",s1);

printf("%c\n",ch);
printf("%s\n",s);
printf("%s\n",s1);
return 0;   
    

}