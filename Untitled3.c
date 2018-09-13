#include<stdio.h>

void bin2dec(int p*){
		
	for(j=6;j>0;j--){
	dec[0]+= bin[k]*(pow(2,j));
	k++;
	printf("%d\n",dec[0]);		
	}

return dec;
}

void hexa2dec(char hex[]){
	
	int hexa[20];
	
	while(hex[i] != '\0'){
		if(hex[i]=='a'||hex[i]=='b'||hex[i]=='c'||hex[i]=='d'||hex[i]=='e'||hex[i]=='f'){
			hexa[i]=hex[i] - '7';
		}else{
			hexa[i]=hex[i] - '0';	
			}
		i++;
	}
	
}

int bin(int *k){
	
	int bin[100],i=0;
	
	 if ( k < 2 ) {
	 return k;
	 }
 
	bin[i+1]=(10*bin(k/2))+k%2);
	
	return 0;
}

int main(){

int x;
char hexadecimal[]= "49276d206b696c6c696e6720796f757220627261696e206c696b65206120706f69736f6e6f7573206d757368726f6f6d";

scanf("%d",&x);
bin(x);
*pHex = hexadecimal;
hexa2dec(pHex);

return 0;
}
