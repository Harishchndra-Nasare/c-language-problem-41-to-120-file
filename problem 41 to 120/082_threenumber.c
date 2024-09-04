#include<stdio.h>
void main(){
	int num1,num2,num3;
	printf("Enter the number1\n");
	scanf("%d",&num1);
	printf("Enter the number2\n");
	scanf("%d",&num2);
	printf("Enter the number3\n");
	scanf("%d",&num3);
	if(num1<20 && num1>50 && num2<20 && num2>20 && num3<20 && num3>50){
		printf("True");
	}else{
		printf("False");
	}
}
