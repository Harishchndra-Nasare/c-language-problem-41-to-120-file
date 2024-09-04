#include<stdio.h>
void main(){
	int num1,num2;
	printf("Enter the number1\n");
	scanf("%d",&num1);
	printf("Enter the number2\n");
	scanf("%d",&num2);
	if(num1<40 && num2>50){
		printf("The given two number in the range of 40 to 50");
	}else if(num1<50 && num2>60){
		printf("Both in the range of 50 to 60");
	}else{
		printf("Is not in the range");
	}
}
