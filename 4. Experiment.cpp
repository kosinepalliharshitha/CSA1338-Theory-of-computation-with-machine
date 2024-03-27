#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	char s[100];
	int i;
	printf("enter the string:");
	scanf("%s",&s);
	for(i=0;i<strlen(s);i++){
    if((s[i]=='0'||s[i]=='1')&&s[0]=='0'&&s[strlen(s)-1]=='0'||s[0]=='1'&&s[strlen(s)-1]=='1'){
    	printf("accepted");
    	break;
    }
	else{
	printf("not accepted");
	break;
}
}
getch();
}
