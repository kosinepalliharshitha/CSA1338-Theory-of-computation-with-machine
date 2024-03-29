#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	printf("enter the string:");
	scanf("%s",&a);
	if(a[0]=='a'&&a[strlen(a)-1]=='a')
	printf("accepted");
	else
	printf("rejected");
	return 0;
}

