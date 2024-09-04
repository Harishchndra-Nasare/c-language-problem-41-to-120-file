#include<stdio.h>
void main(){
	int num,rev,num1,num2,num3;
	printf("Enter the number in three didgit\n");
	scanf("%d",&num);
	num1=num%10;
	num=num/10;
	num2=num%10;
	num=num/10;
	num3=num%10;
	rev=num1*100+num2*10+num3*1;
	printf("%d",rev);
}
