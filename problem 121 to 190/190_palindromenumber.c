#include<stdio.h>
int main(){
	int num,original,reversed=0,reminder;
	printf("Enter the number\n");
	scanf("%d",&num);
	original=num;
	while(num!=0){
		reminder=num%10;
		reversed=reversed*10+reminder;
		num=num/10;
	}
	if(original==reversed){
		printf("Palindrome number");
	}else{
		printf("Not palindrome number");
	}
	return 0;
}
