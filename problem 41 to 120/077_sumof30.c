#include<stdio.h>
void main(){
	int num1,num2,sum;
	printf("Enter the numbr1\n");
	scanf("%d",&num1);
	printf("Enter the number2\n");
	scanf("%d",&num2);
	sum=num1+num2;
	if(num1 || num2==30 || sum==30){
		printf("True");
	}else{
		printf("false");
	}
}
