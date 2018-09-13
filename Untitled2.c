#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int i=0;
	char hex[10];
	gets(hex);
	int hexa[20];
	printf("%s",hex);
	
	while(hex[i] != '\0'){
		if(hex[i]=='A'||hex[i]=='B'||hex[i]=='C'||hex[i]=='D'||hex[i]=='E'||hex[i]=='F'){
			hexa[i]=hex[i] - '7';
		}else{
			hexa[i]=hex[i] - '0';	
			}
		i++;
	}
	
	i=0;
	printf("\n");
	while(hex[i] != '\0'){
	printf("%d ",hexa[i]);
	i++;
	}

	return 0;
}
