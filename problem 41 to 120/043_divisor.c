#include<stdio.h>
void main(){
	int value,i;
	printf("Enter the value\n");
	scanf("%d",&value);
	
	for(i=1;i<=value;i++){
		if(value%i==0){
			printf("%d\n",i);
			printf("\n");
		}
		
	}
}
