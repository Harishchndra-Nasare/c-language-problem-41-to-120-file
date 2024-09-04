#include<stdio.h>
void main(){
	int num1,num2;
	printf("Enter thr number1");
	scanf("%d",&num1);
	printf("Enter the number2");
	scanf("%d",&num2);
	if(num1>=20 || num1<=50 && num2>=20 || num2<=50){
		printf("True");
	}else{
		printf("False");
	}
}
