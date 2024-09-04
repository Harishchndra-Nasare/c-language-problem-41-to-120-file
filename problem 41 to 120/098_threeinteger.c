#include<stdio.h>
void main(){
	int num1,num2,num3;
	printf("Enter the number1\n");
	scanf("%d",&num1);
	printf("Enter the number2\n");
	scanf("%d",&num2);
	printf("Enter the number3\n");
	scanf("%d",&num3);
	if(num1>=20 || num2<=num3){
		printf("True");
	}else{
		printf("False");
	}
}
