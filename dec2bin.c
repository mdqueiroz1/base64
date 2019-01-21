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
	//enviar para binaryToAscii
}

void asciiToBinary(int dec,int *bin,int cont){
	
	
	//enviar para binaryToBase64
}
void base64ToDecimal(){
	//while(arquivo != EOF){
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
	//}
	//Passar char b64 para decimal referente;
	
}
void menu(){
	
	int menu
	
	printf("============================\n");
	printf("===========BASE64===========\n");	
	printf("============================\n");
	printf("=   \t1-Encryption\t   =\n");
	printf("=   \t2-Decryption\t   =\n");
	printf("============================\n");
	fflush(stdin);
	printf("Option:");do{scanf("%d", &menu);}while(menu>2||menu<1);
	system("cls");
	
	switch(menu){
		case 1:{
				printf("Encryption:\nTo encrypt the file, paste the text on the decryption file\n");
				printf("save the file on the same folder and run the program.\n\nIgnore those steps if you aready did it");
			break;
		}
		case 2:{
				printf("Decryption:\nTo dencrypt the file, paste the text on the encryption file");
				printf("\nsave the file on the same folder and run the program.\n\nIgnore those steps if you aready did it");
			break;
		}
	}
	
}

int main(){
	
	int dec,bin[8],cont,i=0;
	
	do{
		scanf("%d", &dec);
	}while(dec<0||dec>126);
		
	cont=64;
	
	while(cont>=1){
		if(dec>=cont){
			dec=dec%cont;
			bin[i]=1;
		}else bin[i]=0;
		
		cont=cont/2;
		i++;
	}
	
	for(i=0;i<8;i++){
		printf("%d",bin[i]);
	}
		
	return 0;
}


void stringToBase64(char *vet){
	int i;
	
	while(vet[i]!= EOF){
		
	i++;
	}
}

void base64ToString(char *vet){
	int i;
	while (vet[i]!= EOF){
		
		i++;
	}
}

void openProg(int i){
		FILE *f;
	
	char *ch,charCont;
	int cont;
		
	if((f=fopen("bin2b64","a+")) == NULL){
		printf("Falha ao abrir");
		exit(1);
	}else {
		printf("Aberto com sucesso.\n\n");
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

