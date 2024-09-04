#include<stdio.h>
void main(){
	int num1,num2;
	printf("Enter the number1\n");
	scanf("%d",&num1);
	printf("Enter the number2\n");
	scanf("%d",&num2);
	if(num1>=100 && num1<=200 && num2>=100 && num2<=100){
		printf("Is in the range");
	}else{
		printf("Is not in the range");
	}
}
