#include<stdio.h>
#include<string.h>
int main()
{
    int hr,min,sec;
    char m[2];
    scanf("%d:%d:%d%s",&hr,&min,&sec,&m);
    if(strcmp(m,"PM")==0&&hr!=12||strcmp(m,"AM")==0&&hr==12)
    hr+=12;
    hr%=24;
    printf("%02d:%02d:%02d\n",hr,min,sec);
    return 0;
}
