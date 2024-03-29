#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int i,a=0,b=0;
	printf("enter the string:");
	scanf("%s",&a);
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]=='0')
		
			a+=1;
		
		if(s[i]=='1')
		
			b+=1;
	}
		if(a==b&&s[0]=='0'&&s[strlen(s)-1]=='1')
		
			printf("accepted");
		else
		printf("rejected");
		

	return 0;
}

		