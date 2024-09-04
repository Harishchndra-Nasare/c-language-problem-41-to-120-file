#include<stdio.h>
void main(){
	int num1,num2,sum,diff;
	printf("Enter the number1\n");
	scanf("%d",&num1);
	printf("Enter the number2\n");
	scanf("%d",&num2);
	sum=num1+num2;
	diff=num1-num2;
	if(num1==5 || num2==5 || sum==5 || diff==5){
		printf("true");
	}else{
		printf("False");
	}
}
