#include<stdio.h>

int main(){
	
	int dec,bin[6],cont,i;
	do{
	scanf("%d", &dec);
	}while(dec<0||dec>64);
		
	cont=32;
	
	while(cont>1){
		
		if(dec>=cont){
			dec=cont%dec;
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

void b64(*vet){
	
	while(vet[i]!= EOF){
		
	i++
	}
}
