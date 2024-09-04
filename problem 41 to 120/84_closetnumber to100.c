#include<stdio.h>
void main(){
	int num1,num2;
	printf("Enter the number1\n");
	scanf("%d",&num1);
	printf("Enter the number2\n");
	scanf("%d",&num2);
	if(num1>num2){
		printf("Closet nummber to 100 %d is",num1);
	}else if(num2>num1){
		printf("Closet nummber to 100 %d is",num2);
	}
}
