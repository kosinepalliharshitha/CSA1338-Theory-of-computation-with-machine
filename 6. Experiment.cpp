#include<stdio.h>
#include<string.h>
int main()
{
	int i,a=0,b=0;
	char s[100];
	printf("enter the string:");
	scanf("%s",&s);
	for(i=0;i<strlen(s);i++){
			if(s[i]=='0')
			a+=1;
			else if(s[i]=='1')
			b+=1;
	}
	if(a==b&&s[0]=='0'&&s[strlen(s)-1]=='1')
	printf("accepted");
	else
	printf("not accepted");
	return 0;
}
