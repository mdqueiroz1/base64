#include<stdio.h>
#include<stdlib.h>

void base64ToBinary(int dec,int *bin){
	
	int cont=32,i=0;
	
	while(cont>=1){
		if(dec>=cont){
			dec=dec%cont;
			bin[i]=1;
		}else bin[i]=0;
		
		cont=cont/2;
		i++;
	}
	
}

int main(){
	
	int dec,bin[6],cont,i=0;
	
	do{
		scanf("%d", &dec);
	}while(dec<0||dec>63);
		
	cont=32;
	
	while(cont>=1){
		if(dec>=cont){
			dec=dec%cont;
			bin[i]=1;
		}else bin[i]=0;
		
		cont=cont/2;
		i++;
	}
	
	for(i=0;i<6;i++){
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
