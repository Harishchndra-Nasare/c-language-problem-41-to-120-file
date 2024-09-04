#include<stdio.h>
void main(){
	int side1,side2,side3,total;
	printf("Enter the the side1 value\n");
	scanf("%d",&side1);
	printf("Enter the the side2 value\n");
	scanf("%d",&side2);
	printf("Enter the the side3 value\n");
	scanf("%d",&side3);
	total=side1+side2+side3;
	if(total==180){
		printf("Triangle");
	}else{
		printf("Not triangle");
	}
}
