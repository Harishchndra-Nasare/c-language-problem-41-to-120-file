#include<stdio.h>
void main(){
	int num1,num2;
	printf("Enter the value num1");
	scanf("%d",&num1);
	printf("Enter the value num2");
	scanf("%d",&num2);
	if(num1>=20 && num2<=30){
		printf("Two values in the range");
	}else{
		printf("0");
	}
}
