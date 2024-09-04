#include<stdio.h>
void main(){
	int num1,num2,triple,result;
	printf("Enter the number1");
	scanf("%d",&num1);
	printf("Enter the number2");
	scanf("%d",&num2);
	if(num1==num2){
		triple=num1*num2;
		triple=triple*3;
		printf("%d",triple);
	}else{
		result=num1*num2;
		printf("%d",result);
	}
}
