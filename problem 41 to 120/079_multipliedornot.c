#include<stdio.h>
void main(){
	int num;
	printf("Enter the positive number\n");
	scanf("%d",&num);
	if(num%3==0 && num%7==0){
		printf("Number is multipled by 3 and 7");
	}else{
		printf("Not multiplied");
	}
}
