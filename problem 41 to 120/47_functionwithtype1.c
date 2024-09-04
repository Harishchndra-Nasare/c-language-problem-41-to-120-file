#include<stdio.h>
void armstrong(){
	int num,reverse=0,reminder,original;
	printf("Enter the number\n");
	scanf("%d",&num);
	original=num;
	while(num>0){
		reminder=num%10;
		reverse=reverse+reminder*reminder*reminder;
		num=num/10;
	}
	if(original==reverse){
		printf("Armstrong number");
	}else{
		printf("not armstrong number");
	}
}
void main(){
	armstrong();
}
