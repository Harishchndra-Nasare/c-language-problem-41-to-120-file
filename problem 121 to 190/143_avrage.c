#include<stdio.h>
void main(){
	int num1,num2,num3,num4,sum,avg;
	printf("Enter the num1\n");
	scanf("%d",&num1);
	printf("Enter the num2\n");
	scanf("%d",&num2);
	printf("Enter the num3\n");
	scanf("%d",&num3);
	printf("Enter the num4\n");
	scanf("%d",&num4);
	sum=num1+num2+num3+num4;
	avg=sum/4;
	printf("Avrage of 4 number is %d",avg);
}
