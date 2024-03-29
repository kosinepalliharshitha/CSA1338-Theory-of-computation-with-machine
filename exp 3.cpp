#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int i,f;
	printf("enter the string:");
	scanf("%s",&a);
	for(i=0;i<strlen(a);i++)
	{
	if(a[i]=='0'||a[i]=='1'&&a[0]=='0'&&a[strlen(a)-1]=='1')
	{
	printf("accepted");
	break;
}
else
printf("rejected");
break;
}
return 0;
}

	
	
