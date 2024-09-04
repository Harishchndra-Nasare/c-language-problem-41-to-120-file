#include<stdio.h>
void main(){
	int num1,num2,sum;
	printf("Enter the number1\n");
	scanf("%d",&num1);
	printf("Enter the number2\n");
	scanf("%d",&num2);
	sum=num1+num2;
	if(sum>10 && sum<20){
		sum=30;
		printf("%d",sum);
	}
}
