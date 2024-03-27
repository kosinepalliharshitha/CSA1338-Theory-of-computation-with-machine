#include<stdio.h>
#include<string.h>
int main()
{
int i,t;
char s[100];
printf("enter the string:");
scanf("%s",&s);
for(i=0;i<strlen(s);i++){
if(s[i]=='0'||s[i]=='1'&&s[i+1]=='1'&&s[i+2]=='0'&&s[i+3]=='1')
t=1;
}
if(t==1)
printf("accepted");
else
printf("not accepted");
return 0;
}
