#include<stdio.h>
void main(){
	int num1,num2,res;
	printf("Enter the first number");
	scanf("%d",&num1);
	printf("Enter the second number");
	scanf("%d",&num2);
	if(num1%num2==0){
		printf("Number is multiplied by second number");
	}else{
		printf("Number is not multiplied");
	}
	
}
