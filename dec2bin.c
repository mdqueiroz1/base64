#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define EXIT_ERROR 1

void toBinary(FILE *f,int dec,int cont){

	//base64 to bin cont=32;
	//ascii to bin cont=128;

	int i=0;

	while(cont>=1){
		if(dec>=cont){
			dec=dec%cont;
			fprintf(f,"1");
		}else fprintf(f,"0");

		cont=cont/2;
		i++;
	}
}

int base64ToDecimal(char ch,FILE *f){
	//char b64 to dec
	int dec;

	if(ch>64&&ch<91){
		dec=ch-65;
	}else{
		if(ch>96&&ch<122){
			dec=ch-71;
		}else{
			if(ch>47&&ch<58){
				dec=ch+4;
			}else{
				if(ch=='+'){
					dec=43;
				}else{
					if(ch=='/'){
						dec=47;
					}
				}
			}
		}
	}
	return dec;
}

void asciiToDecimal(char ch){
	int i;
	i=ch;

//-------------------------------------------------------------
//			OPEN FILES
//-------------------------------------------------------------
	FILE* f;
	
	if((f=fopen("ascii2dec","w")) == NULL){
		printf("Fail");
		exit(1);
	}


	fprintf(f,"%d ",i);
}

void encrypt(){

	FILE *encryFile, *decryFile, *binFile, *ascii2decFile;
	char ch;
	int cont,decAscii;


//-------------------------------------------------------------
//			OPEN FILES
//-------------------------------------------------------------
	if((encryFile=fopen("encryption.txt","w")) == NULL){
		printf("Fail");
		exit(1);
	}else {
		printf("Success open encryFile.\n\n");
		sleep(1);
		system("cls");
	}
	if((decryFile=fopen("decryption.txt","r")) == NULL){
		printf("Fail");
		exit(1);
	}else {
		printf("Success open decryFile.\n\n");
		sleep(1);
		system("cls");
	}
	if((ascii2decFile=fopen("asciidec","w+")) == NULL){
		printf("Fail");
		exit(1);
	}else {
		printf("Success open .\n\n");
		sleep(1);
		system("cls");
	}
	if((binFile=fopen("bin","w+")) == NULL){
		printf("Fail");
		exit(1);
	}else {
		printf("Success.\n\n");
		sleep(1);
		system("cls");
	}
//-------------------------------------------------------------
//			END OPEN FILES
//-------------------------------------------------------------
	
	/*
	while(ch != EOF){//transform all of characters on decimal
		ch=fgetc(decryFile);
		ascii2dec(ascii2decFile, ch);
	}

	while(decAscii != EOF){//transform decimal ASCII on binary
		fscanf(ascii2decFile,"%d", &decAscii);
		toBinary(binFile,decAscii,128);
	}
	if((encryFile=fopen("encryption.txt","w")) == NULL){
		printf("Fail");
	
	if((decryFile=fopen("decryption.txt","w")) == NULL){
		printf("Falha ao abrir");
		exit(1);
	}else {
		printf("Success.\n\n");
		sleep(1);
		system("cls");
	}
	*/
//-------------------------------------------------------------
//			CLOSE FILES
//-------------------------------------------------------------
	fclose(encryFile);
	fclose(decryFile);
	fclose(binFile);
	fclose(ascii2decFile);
//-------------------------------------------------------------
//			END CLOSE FILES
//-------------------------------------------------------------
}

void decrypt(){
	exit(1);
}

void menu(int men){

	switch(men){
		case 1:{
				printf("Encryption:\nTo encrypt the file, paste the text on decryption file\nsave the file on the same folder and run the program.\n\nIgnore those steps if you already did it and take the text encrypted");
				encrypt();
			break;
		}
		case 2:{
				printf("Decryption:\nTo decrypt the file, paste the text on encryption file\nsave the file on the same folder and run the program.\n\nIgnore those steps if you already did it and take the file decrypted");
				decrypt();
			break;
		}
	}
}
int main(){

	printf("  ==================================================\n");
	printf("|| d8888b.  .d8b.  .d8888. d88888b     dD     j88D  ||\n");
	printf("|| 88  `8D d8' `8b 88'  YP 88'        d8'    j8~88  ||\n");
	printf("|| 88oooY' 88ooo88 `8bo.   88ooooo   d8'    j8' 88  ||\n");
	printf("|| 88~~~b. 88~~~88   `Y8b. 88~~~~~  d8888b. V88888D ||\n");
	printf("|| 88   8D 88   88 db   8D 88.      88' `8D     88  ||\n");
	printf("|| Y8888P' YP   YP `8888Y' Y88888P  `8888P      VP  ||\n");
	printf("  ==================================================\n");
	printf("  1-Encryption\n");
	printf("  2-Decryption\n");
	printf("  ==================================================\n");
	fflush(stdin);
	printf("  Option:");

	int m;

	do{
		scanf("%d", &m);
	}while(m>2||m<1);
	system("cls");

	menu(m);

	return 0;
}
