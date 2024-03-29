#include<stdio.h>
#include<string.h>
int main()
{
	int i,t;
	char a[100];
	printf("enter a string:");
	scanf("%s",&a);
	for(i=0;i<strlen(a);i++){
	
	if(a[i]=='0'||a[i]=='1'&&a[i+1]=='1'&&a[i+2]=='0'&&a[i+3]=='1')
	t=1;
}
if(t==1)

	printf("accepted");
	else
	printf("rejected");
	
	return 0;

}