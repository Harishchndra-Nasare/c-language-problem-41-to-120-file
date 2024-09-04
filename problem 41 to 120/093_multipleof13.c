#include<stdio.h>
void main(){
	int num;
	printf("Enter the number\n");
	scanf("%d",&num);
	if(num % 13 == 0){
		printf("Multiple of 13");
	}else{
		printf("Not multiple of 13");
	}
}
