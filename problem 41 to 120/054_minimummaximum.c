#include<stdio.h>
void main(){
	int num1,num2,num3,num4;
	printf("Enter the number\n");
	scanf("%d",&num1);
	printf("Enter the number2\n");
	scanf("%d",&num2);
	printf("Enter the number3\n");
	scanf("%d",&num3);
	printf("Enter the number4\n");
	scanf("%d",&num4);
	
	if(num1>num2 && num1>num3 && num1>num4){
		printf("max %d",num1);
	}else if(num2>num1 &&num2>num3 && num2>num4){
		printf("max %d",num2);
	}else if(num3>num1 && num3>num2 && num3>num4){
		printf("max %d",num3);
	}else{
		printf("max %d",num4);
	}
	
		if(num1<num2 && num1<num3 && num1<num4){
		printf("min %d",num1);
	}else if(num2<num1 &&num2<num3 && num2<num4){
		printf("min %d",num2);
	}else if(num3<num1 && num3<num2 && num3<num4){
		printf("min %d",num3);
	}else{
		printf("min %d",num4);
	}
}
