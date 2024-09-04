#include<stdio.h>
void main(){
	int num;
	printf("Enter the number\n");
	scanf("%d",&num);
	if(num%10<=2 || num%10>=2){
		printf("True");
	}else{
		printf("False");
	}
}
