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

/*
void b64(char *vet){
	int i;
	
	while(vet[i]!= EOF){
		
	i++;
	}
}
*/
