#include<stdio.h>
void main(){
	int i,num1,num2,num3,num4,num5,num6,num7,num8,num9,num10,sum,avg;
	printf("Enter the number 1\n");
	scanf("%d",&num1);
	printf("Enter the number 2\n");
	scanf("%d",&num2);
	printf("Enter the number 3\n");
	scanf("%d",&num3);
	printf("Enter the number 4\n");
	scanf("%d",&num4);
	printf("Enter the number 5\n");
	scanf("%d",&num5);
	printf("Enter the number 6\n");
	scanf("%d",&num6);
	printf("Enter the number 7\n");
	scanf("%d",&num7);
	printf("Enter the number 8\n");
	scanf("%d",&num8);
	printf("Enter the number 9\n");
	scanf("%d",&num9);
	printf("Enter the number 10\n");
	scanf("%d",&num10);
	sum=num1+num2+num3+num4+num5+num6+num7+num8+num9+num10;
	printf("The sum of 10 numbers is %d\n",sum);
	avg=sum/10;
	printf("The avrage is %d",avg);

}
