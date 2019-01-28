#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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

void asciiToDecimal(FILE *f,char ch){
	int i;
	i=ch;

	fprintf(f,"%d ",i);
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
void encrypt(){

	FILE *encryFile, *decryFile, *binFile, *ascii2decFile;
	char ch;
	int cont,decAscii;


	if((decryFile=fopen("decryption.txt","r")) == NULL){
		printf("Fail");
		exit(1);
	}else {
		printf("Success.\n\n");
		sleep(1);
		system("cls");
	}

	if((ascii2decFile=fopen("asciidec","w+")) == NULL){
		printf("Fail");
		exit(1);
	}else {
		printf("Success.\n\n");
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
		exit(1);
	}else {
		printf("Success.\n\n");
		sleep(1);
		system("cls");
	}
	fclose(encryFile);
	fclose(decryFile);
	fclose(binFile);
	fclose(ascii2decFile);
}

int main(){

	printf("============================\n");
	printf("===========BASE64===========\n");
	printf("============================\n");
	printf("=   \t1-Encryption\t   =\n");
	printf("=   \t2-Decryption\t   =\n");
	printf("============================\n");
	fflush(stdin);
	printf("Option:");

	int m;

	do{
		scanf("%d", &m);
	}while(m>2||m<1);
	system("cls");

	menu(m);

	return 0;
}
