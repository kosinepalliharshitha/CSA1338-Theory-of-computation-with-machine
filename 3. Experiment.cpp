#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	int i,f;
	printf("enter the string:");
	scanf("%s",&s);
	for(i=0;i<strlen(s);i++){
    if(s[i]=='0'||s[i]=='1'&&s[0]=='0'&&s[strlen(s-1)=='1']){
    	printf("accepted");
    	break;
	}
	else
	printf("not accepted");
	break;
}
return 0;
}
