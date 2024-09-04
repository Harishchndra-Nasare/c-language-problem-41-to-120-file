#include<stdio.h>
void main(){
	int i,num,count=0,c,rem;
	printf("Enter the number\n");
	scanf("%d",&num);
	c=num;
	while(num>0){
		rem=num%10;
		count=count+rem*rem*rem;
		num=num/10;
	}
	if(count==c){
		printf("Armstrong number\n");
	}else{
		
		printf("Not armstrong number\n");
	}
}
