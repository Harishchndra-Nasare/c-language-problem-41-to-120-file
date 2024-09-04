#include<stdio.h>
void main(){
	int number,i,factorial=1;
	printf("Enter the number\n");
	scanf("%d",&number);
	for(i=1;i<=number;i++){
		factorial=factorial*i;
		//printf("%d",factorial);	
	}
	printf("%d",factorial);
}
