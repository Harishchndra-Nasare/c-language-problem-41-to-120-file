#include<stdio.h>
void armstrong(int n,int rem,int rev){
	int original;
	original=n;
	while(n>0){
		rem=n%10;
		rev=rev+rem*rem*rem;
		n=n/10;
	}
	if(original==rev){
		printf("Armstrong number is %d",rev);
	}else{
		printf("Not armstrong number is %d",rev);
	}
}
void main(){
	int num,reverse=0,reminder;
	printf("Enter the number\n");
	scanf("%d",&num);
	armstrong(num,reminder,reverse);
}
