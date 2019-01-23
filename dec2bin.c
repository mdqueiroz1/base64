#include<stdio.h>
#include<stdlib.h>

	int men;

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
}
int base64ToDecimal(char ch){
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

int asciiToDecimal(char ch){
	int i;
	i=ch;
	
	return i;	
}

void menu(){
	
	printf("============================\n");
	printf("===========BASE64===========\n");	
	printf("============================\n");
	printf("=   \t1-Encryption\t   =\n");
	printf("=   \t2-Decryption\t   =\n");
	printf("============================\n");
	fflush(stdin);
	printf("Option:");
	
	do{
		scanf("%d", &men);
	}while(men>2||men<1);
	
	system("cls");
	
	switch(men){
		case 1:{
				printf("Encryption:\nTo encrypt the file, paste the text on decryption file\nsave the file on the same folder and run the program.\n\nIgnore those steps if you aready did it and take the text encrypted");
				asciiToDecimal();
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
