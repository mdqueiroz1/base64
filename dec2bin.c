#include<stdio.h>
#include<stdlib.h>



void toBinary(int dec,int cont,FILE *f){
	
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
	//Make char b64 to dec	
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

int asciiToDecimal(char ch,FILE *f){
	int i;
	i=ch;
	
	return i;	
}

void menu(int men){
	
	switch(men){
		case 1:{
				printf("Encryption:\nTo encrypt the file, paste the text on decryption file\nsave the file on the same folder and run the program.\n\nIgnore those steps if you aready did it and take the text encrypted");
				encrypt();
			break;
		}
		case 2:{
				printf("Decryption:\nTo dencrypt the file, paste the text on encryption file\nsave the file on the same folder and run the program.\n\nIgnore those steps if you aready did it and take the file decrypted");
				decrypt();
			break;
		}
	}	
}
void encrypt(){
	FILE *encryFile, *decryFile, *bin2b64File, *bbin2asciiFile, *ascii2dec, *dec2bin;
	
	if((encryFile=fopen("encryption.txt","w")) == NULL){
		printf("Falha ao abrir");
		exit(1);
	}else {
		printf("Aberto com sucesso.\n\n");
		sleep(1);
		system("cls");
	}
	
	if((decryFile=fopen("decryption.txt","w")) == NULL){
		printf("Falha ao abrir");
		exit(1);
	}else {
		printf("Aberto com sucesso.\n\n");
		sleep(1);
		system("cls");
	}
	
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
