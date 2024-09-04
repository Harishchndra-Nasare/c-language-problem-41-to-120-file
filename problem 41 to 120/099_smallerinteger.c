#include<stdio.h>
void main(){
	int num1,num2,rem1,rem2;
	printf("Enter the number1\n");
	scanf("%d",&num1);
	printf("Enter the number2\n");
	scanf("%d",&num2);
	rem1=num1%5;
	rem2=num2%5;
	if(rem1==rem2 || num1<num2){
		printf("smaller integer");
	}else{
		printf("0");
	}
}
