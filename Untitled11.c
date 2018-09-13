#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	
	
	int dec[10];
	int i=0,j,k=0;
	int bin[]= {0,1,0,0,1,1}; //0,1,0,1,1,0,0,0,0,1,0,1,1,0,1,1,1,0"; 
	
		
		for(j=6;j>0;j--){
			dec[0]+= bin[k]*(pow(2,j));
			k++;
			printf("%d\n",dec[0]);		
		}
	/*while(bin[i] != NULL){
	i+=6;
	}*/
	//printf("%d",dec[0]);
	
	return 0;
}

