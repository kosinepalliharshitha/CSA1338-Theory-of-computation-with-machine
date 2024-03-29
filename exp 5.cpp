#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int i,f;
	printf("enter the string:");
	scanf("%s",&a);
	for(i=0;i<strlen(a);i++){
	if(a[i]=='1'){
		printf("accepted");
		break;
	}
	else if(a[0]=='0'&&a[strlen(a)-1]=='0')
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

