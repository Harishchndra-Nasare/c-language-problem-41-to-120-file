#include<stdio.h>
void main(){
	int num;
	printf("Enter the non negative number\n");
	scanf("%d",&num);
	if(num%3==0 && num%7==0){
		
	}else if(num%3==0 || num%7==0){
		printf("Number is divisible by 3 or 7");
	}
}
