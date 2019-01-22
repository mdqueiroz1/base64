#include<stdio.h>
#include<stdlib.h>

void base64ToBinary(int dec,int *bin,int cont){
	
	int i=0;
	cont = 32;
	
	while(cont>=1){
		if(dec>=cont){
			dec=dec%cont;
			bin[i]=1;
		}else bin[i]=0;
		
		cont=cont/2;
		i++;
	}
	//send to binaryToAscii
}

void asciiToBinary(int dec,int *bin,int cont){
	
	int i=0;
	cont = 128;

	while(cont>=1){
		if(dec>=cont){
			dec=dec%cont;
			bin[i]=1;
		}else bin[i]=0;
		
		cont=cont/2;
		i++;
	}
	
	//send to binaryToBase64
}
void base64ToDecimal(char ch){

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

	//Make char b64 to dec	
}

int asciiToDecimal(char ch){
	int i;
	i=ch;
	
	return i;	
}

void menu(){
	
	int menu;
	
	printf("============================\n");
	printf("===========BASE64===========\n");	
	printf("============================\n");
	printf("=   \t1-Encryption\t   =\n");
	printf("=   \t2-Decryption\t   =\n");
	printf("============================\n");
	fflush(stdin);
	printf("Option:");
	
	do{
		scanf("%d", &menu);
	}while(menu>2||menu<1);
	
	system("cls");
	
	switch(menu){
		case 1:{
				printf("Encryption:\nTo encrypt the file, paste the text on decryption file\nsave the file on the same folder and run the program.\n\nIgnore those steps if you aready did it and take the text encrypted");
				
			break;
		}
		case 2:{
				printf("Decryption:\nTo dencrypt the file, paste the text on encryption file\nsave the file on the same folder and run the program.\n\nIgnore those steps if you aready did it and take the file decrypted");
					
			break;
		}
	}
	
}

int main(){
	
	
	menu();
		
	return 0;
}

void openProg(int i){
		FILE *f;
	
	char *ch,charCont;
	int cont;
		
	if((f=fopen("bin2b64","a+")) == NULL){
		printf("Fail to open");
		exit(1);
	}else {
		printf("Success.\n\n");
		sleep(2);
		system("cls");
	}
	
	while(charCont != EOF){
		fscanf(f,"%c",&charCont);
		cont++;
	}
	
	ch = (char*) malloc(sizeof(char)*cont);
	
	fclose(f);
}

