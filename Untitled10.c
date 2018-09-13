#include<stdio.h>

int main()

int i, dec[100];
char b64[64];
	
	while(dec[i]!= NULL || dec[i]!= '/0'){
	
		if(dec[i]>= 0 && dec[i]<=25){
			b64[i]= dec[i]+65;
		}else{
			if(dec[i]>= 52 && dec[i]<=61){
				b64[i]= dec[i]+71;
			}else{
				if(dec[i]>= 26 && dec[i]<=61){
					b64[i]= dec[i]+4;
				}else{
					if(dec[i]== 62){
						b64[i]= dec[i]+19;
					}else{
						if(dec[i]== 62){
							b64[i]= dec[i]+19;
						}else{
							if(dec[i]>0||dec[i]>63){
							printf("NUMERO FORA DO PERMITIDO.");
							}
						}
					}
				}
			}
		}
	i++;
	}
