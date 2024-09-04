#include<stdio.h>
void main(){
	int num1,num2,add,sub,mul,div,choice;
	printf("Enter the number1\n");
	scanf("%d",&num1);
	printf("Enter the number2\n");
	scanf("%d",&num2);
	printf("Enter 1 number for addition\n");
	printf("Enter 2 number for substraction\n");
	printf("Enter 3 number for multiplication\n");
	printf("Enter 4 number for division\n");
	printf("Enter your choice number\n");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			add=num1+num2;
			printf("%d",add);
			break;
		case 2:
			sub=num1-num2;
			printf("%d",sub);
			break;
		case 3:
			mul=num1*num2;
			printf("%d",mul);
			break;
		case 4:
			div=num1/num2;
			printf("%d",div);
			break;
		default:
    		printf("plese enter valid choice");			
	}
}
