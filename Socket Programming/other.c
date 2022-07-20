#include<stdio.h>
#include<string.h>

void main()
{


char s[200];

fgets(s,sizeof(s),stdin);
printf("\n %s",s);
fputs(s,stdin);
 
}