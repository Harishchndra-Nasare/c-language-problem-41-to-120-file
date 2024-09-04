#include<stdio.h>
void main(){
	int number;
	printf("Enter the Day number\n");
	scanf("%d",&number);
	if(number==1){
		printf("Monday");
	}else if(number==2){
		printf("Thuesday");
	}else if(number==3){
		printf("Wensday");
	}else if(number==4){
		printf("Thursday");
	}else if(number==5){
		printf("Friday");
	}else if(number==6){
		printf("Saturday");
	}else if(number==7){
		printf("Sunday");
	}
}
