#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int i=0,x=0,y=6,z=1,dec[100];
	int bin[]={0,1,0,0,1,1,0,1,0,1,1,0};
	
	dec[0]=0;
	
	while( bin[x]== 0 || bin[x]== 1){
		//printf("%d\n",x);
		for(y=6;y>0;y--){
			//printf("%d,%d\n",y,z);
			dec[i]+= bin[y]*(2*z);
			z++;
			printf("%d\n",dec[i]);
		}
	i++;
	z=1;
	x+=6;
	}	
return 0;
}


