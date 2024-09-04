#include<stdio.h>
void main(){
	int x,y,z,op1,op2;
	printf("Enter the x value\n");
	scanf("%d",&x);
	printf("Enter the y value\n");
	scanf("%d",&y);
	printf("Enter the z value\n");
	scanf("%d",&z);
	op1=(x+y)*z;
	op2=x*y+x*z;
	printf("The first output is %d\n",op1);
	printf("The second output is %d",op2);
}
