#include<stdio.h>
void main(){
	int num;
	printf("Enter the number\n");
	scanf("%d",&num);
	if(100-num<=10 || 200-num<=10){
		printf("True");
	}else{
		printf("false");
	}
}
