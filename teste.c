#include<stdio.h>

int main(){
	
	char ch;
	fflush(stdin);
	scanf("%c", &ch);
	fflush(stdin);	
		
	if(ch>64&&ch<91){
		ch=ch-65;
	}
	if(ch>96&&ch<122){
		ch=ch-71;
	}
	if(ch>47&&ch<58){
		ch=ch+4;
	}
	if(ch=='+'){
		ch=43;
	}
	if(ch=='/'){
		ch=47;
	}
	
	printf("%d", ch);

	return 0;	
}
