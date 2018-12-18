/*https://www.hackerrank.com/challenges/two-strings/problem*/



#include<stdio.h>
#include<string.h>
/*---------------------code---------------------------------------*/
char* twoStrings(char* s1, char* s2)
{
    long long int i,j,k,z;
    k=strlen(s1);
    z=strlen(s2);
    for(i=0;i<k;i++)
    {
        for(j=0;j<z;j++)
        {
            if(s1[i]==s2[j])
            return "YES";
        }
    }
    return "NO";
}
void main()
{
	int test;
	scanf("%d",&test);
	while(test)
	{
		char s1[100],s2[100];
		scanf("%s",s1);
		scanf("%s",s2);
		char* result = twoStrings(s1, s2);
		printf("%s",result);
		test--;
	}
}
