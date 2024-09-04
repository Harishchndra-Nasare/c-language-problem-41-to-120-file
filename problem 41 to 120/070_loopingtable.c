#include<stdio.h>
void main(){
	int i,j;
	for(i=1;i<20;i++){
		for(j=1;j<=i;j++){
			if(j%2==0){
				j=j+2;
				printf("%d\n",j);
			}
			i=i+3;
			}
			printf("%d\n",i);
		}
	}
