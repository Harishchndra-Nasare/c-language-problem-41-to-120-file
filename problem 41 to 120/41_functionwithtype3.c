#include<stdio.h>
int reminder(int i){
	int y;
		if(y%7==2 ||y%7==3){
			return(y);
		}
}
void main(){
	int num1,num2,i,r;
	printf("Enter the number1\n");
	scanf("%d",&num1);
	printf("Enter the number2\n");
	scanf("%d",&num2);
	for(i=num1;i<=num2;i++){
	r=reminder(num1,num2);
	printf("%d",r);
	}
}
