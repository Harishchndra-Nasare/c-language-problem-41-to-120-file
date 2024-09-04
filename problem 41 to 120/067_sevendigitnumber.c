#include<stdio.h>
void main(){
	int num,rem,i;
	printf("Enter the 7 digit number\n");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		rem=num%10;
		num=num/10;
		printf("%d\n\n",rem);
	}
}
