#include<stdio.h>
void main(){
	int num;
	printf("Enter the number\n");
	scanf("%d",&num);
	if(num%1==0){
		printf("Prime number");
	}else{
		printf("not prime number");
	}
}
