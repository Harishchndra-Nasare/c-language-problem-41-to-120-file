#include<stdio.h>
void main(){
	int num,rem,i,rev;
	printf("Enter the 5 digit number\n");
	scanf("%d",&num);
	rev=rem;
		rem=num%10;
		printf("%d\n",rem);
		num=num/10;
	if(rev==rem){
		printf("Its palindrome number\n");
	}else{
		printf("Not palindrome number");
	}
}
