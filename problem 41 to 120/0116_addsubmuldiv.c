#include<stdio.h>
void main(){
	int num1,num2,add,sub,mul,div;
	printf("Enter the number1 value\n");
	scanf("%d",&num1);
	printf("Enter the number2 value\n");
	scanf("%d",&num2);
	add=num1+num2;
	sub=num1-num2;
	mul=num1*num2;
	div=num1/num2;
	printf("Addition of two number is=%d\n",add);
	printf("substactiion of two number is=%d\n",sub);
	printf("Multiplication of two number is=%d\n",mul);
	printf("Divison of two number is=%d",div);
}
