#include<stdio.h>
#include<string.h>
int main(){
	int i,n,j;
	char s[100];
	printf("enter the string:");
	scanf("%s",&s);
	n=strlen(s);
    for(i=0;i<n;i++){
		if(s[i]=='1'){
			printf("accepted");
			break;
		}
		else if(s[0]=='0'&&s[n-1]=='0'){
			printf("accepted");
			break;
		}
		else{
		printf("not accepted");
		break;
	}
	}
return 0;
}
