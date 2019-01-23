#include<stdio.h>
#include<stdlib.h>
#include<dos.h>

int main(){
	
	FILE *f;
	
	if((f=fopen("escrita.txt","w")) != NULL){
		exit(EXIT_ERROR)
	}else {
		printf("Success");
		sleep(1);
		system("cls");
	}
	
	return 0;
}


